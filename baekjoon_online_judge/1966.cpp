// BOJ 1966 프린터 큐
// LINK: https://www.acmicpc.net/problem/1966
// DSA: Queue, Priority Queue

#include <iostream>
#include <queue>
#include <vector>

int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

    int T; std::cin >> T;
    while(T--) {
        int N, M; std::cin >> N >> M;

        std::vector<int> priority(N);
        std::priority_queue<int> heap;
        std::queue<int> queue;

        for(int i = 0; i < N; i++) queue.push(i);
        for(int& p : priority) {
            std::cin >> p; heap.push(p);
        }

        int order = 1;
        while(true) {
            while(priority[queue.front()] < heap.top()) {
                queue.push(queue.front()); queue.pop();
            }

            if(queue.front() == M) break;
            queue.pop(); heap.pop();
            order++;
        }

        std::cout << order << '\n';
    }
    return 0;
}
