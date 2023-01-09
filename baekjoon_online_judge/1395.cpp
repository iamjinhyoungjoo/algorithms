// BOJ 1395 후위 표기식 2
// LINK: https://www.acmicpc.net/problem/1395
// DSA: Stack

#include <iostream>
#include <string>
#include <array>
#include <stack>

int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);
    std::cout.precision(2);
    std::cout.setf(std::ios::showpoint);
    std::cout.setf(std::ios::fixed);

    int N; std::cin >> N;
    std::string equation; std::cin >> equation;

    std::array<double, 26> values = { 0 };
    for(int i = 0; i < N; i++) std::cin >> values[i];

    std::stack<double> stack;
    auto push_calculation = [&stack](char op) {
        double f_1 = stack.top(); stack.pop();
        double f_2 = stack.top(); stack.pop();

        double result = 0;
        switch(op) {
            case '+':
                result = f_1 + f_2;
                break;

            case '-':
                result = f_2 - f_1;
                break;

            case '*':
                result = f_1 * f_2;
                break;

            case '/':
                result = f_2 / f_1;
                break;
        }

        stack.push(result);
    };

    for(char ch : equation) {
        if(isalpha(ch)) stack.push(values[ch - 'A']);
        else push_calculation(ch);
    }

    std::cout << stack.top() << '\n';

    return 0;
}

