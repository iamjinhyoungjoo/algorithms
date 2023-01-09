// BOJ 1874 스택 수열
// LINK: https://www.acmicpc.net/problem/1874
// DSA: Stack

#include <iostream>
#include <stack>
#include <string>

int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

    std::stack<int> stack; int idx = 1;
    std::string result = "";

    int N; std::cin >> N;
    while(N--) {
        std::string temp = "";
        int input; std::cin >> input;

        if(input >= idx) {
            for(; idx <= input; idx++) {
                stack.push(idx);
                temp += "+\n";
            }
        }

        if(!stack.empty() && input == stack.top()) {
            temp += "-\n";
            stack.pop();
        }else {
            std::cout << "NO\n"; return 0;
        }

        result += temp;
    }

    std::cout << result;
    return 0;
}

