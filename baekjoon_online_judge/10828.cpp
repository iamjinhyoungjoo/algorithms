// BOJ 10828 스택
// LINK: https://www.acmicpc.net/problem/10828
// DSA: Stack

#include <iostream>
#include <string>

int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

    int stack[10001]; int idx = 0;

    int N; std::cin >> N;
    while(N--) {
        std::string input; std::cin >> input;
        if(input == "push") {
            int tmp; std::cin >> tmp;
            stack[idx++] = tmp;
        }else if(input == "pop") {
            if(idx) std::cout << stack[--idx] << '\n';
            else std::cout << "-1\n";
        }else if(input == "size") {
            std::cout << idx << '\n';
        }else if(input == "empty") {
            std::cout << (idx ? "0\n" : "1\n");
        }else if(input == "top") {
            if(idx) std::cout << stack[idx - 1] << '\n';
            else std::cout << "-1\n";
        }
    }

    return 0;
}
