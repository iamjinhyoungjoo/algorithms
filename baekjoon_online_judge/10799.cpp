// BOJ 10799 쇠막대기
// LINK: https://www.acmicpc.net/problem/10799
// DSA: Stack

#include <iostream>
#include <string>

int main(void) {
    std::string input; std::cin >> input;
    int stack = 0, sum = 0;
    for(int i = 0; i < input.length(); i++) {
        char cur = input[i];
        if(cur == '(') {
            stack++;
            if(input[i + 1] == ')') {
                sum += (--stack);
                i++;
            }
        }else { // cur == ')'
            sum++; stack--;
        }
    }
    std::cout << sum << "\n";
    return 0;
}
