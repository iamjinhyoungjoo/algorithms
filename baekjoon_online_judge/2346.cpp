// BOJ 2346 풍선 터뜨리기
// LINK: https://www.acmicpc.net/problem/2346
// DSA: Deque

#include <iostream>
#include <deque>
#include <vector>

int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

    int N; std::cin >> N;
    std::vector<int> values(N + 1);
    for(int i = 1; i <= N; i++) std::cin >> values[i];

    std::deque<int> deque;
    for(int i = 1; i <= N; i++) deque.push_back(i);

    while(!deque.empty()) {
        int target = deque.front(); deque.pop_front();
        std::cout << target << ' ';

        if(values[target] > 0) {
            for(int i = 1; i < values[target]; i++) {
                deque.push_back(deque.front());
                deque.pop_front();
            }
        }else {
            for(int i = 0; i > values[target]; i--) {
                deque.push_front(deque.back());
                deque.pop_back();
            }
        }
    }

    std::cout << '\n';

    return 0;
}
