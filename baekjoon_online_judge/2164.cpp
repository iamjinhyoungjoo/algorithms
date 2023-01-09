// BOJ 2164 카드2
// LINK: https://www.acmicpc.net/problem/2164
// DSA: Queue

#include <iostream>
#include <queue>

int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

    int N; std::cin >> N;

    std::queue<int> queue;
    for(int i = 1; i <= N; i++) queue.push(i);

    while(queue.size() != 1) {
        queue.pop();
        queue.push(queue.front());
        queue.pop();
    }

    std::cout << queue.front() << '\n';

    return 0;
}
