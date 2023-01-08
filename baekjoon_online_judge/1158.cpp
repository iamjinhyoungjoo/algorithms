// BOJ 1158 요세푸스 문제
// LINK: https://www.acmicpc.net/problem/1158
// DSA: Queue

#include <iostream>
#include <queue>

int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);
    
    int N, K; std::cin >> N >> K;
    std::queue<int> queue; for(int i = 1; i <= N; i++) queue.push(i);
    
    int count = N;
    std::cout << "<";
    while(count-- != 1) {
        for(int i = 1; i < K; i++) {
            queue.push(queue.front()); queue.pop();
        }
        std::cout << queue.front() << ", "; queue.pop();
    }
    std::cout << queue.front() << ">\n";
    return 0;
}

