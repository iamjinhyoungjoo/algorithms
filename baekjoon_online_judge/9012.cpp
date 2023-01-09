// BOJ 9012 괄호
// LINK: https://www.acmicpc.net/problem/9012
// DSA: Stack

#include <iostream>
#include <string>

int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

    int N; std::cin >> N;
    while(N--) {
        std::string input; std::cin >> input;
        int stack = 0; bool is_valid = true;
        for(char ch : input) {
            if(ch == '(') stack++;
            else if(ch == ')')
                if(--stack == -1) {
                    is_valid = false; break;
                }
        }
        std::cout << (is_valid && stack == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}

