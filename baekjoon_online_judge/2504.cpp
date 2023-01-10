// BOJ 2504 괄호의 값
// LINK: https://www.acmicpc.net/problem/2504
// DSA: Stack

#include <iostream>
#include <stack>
#include <string>

bool is_valid(const std::string& input) {
    int a = 0, b = 0;
    char top = ' ';
    for(const char ch : input) {
        switch(ch) {
            case '(':
                a++; top = '(';
                break;

            case ')':
                if(a-- == 0) return false;
                if(top == '[') return false;
                top = ')';
                break;

            case '[':
                b++;
                top = '[';
                break;

            case ']':
                if(b-- == 0) return false;
                if(top == '(') return false;
                top = ']';
                break;
        }
    }
    return (a == 0 && b == 0);
}

int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

    std::string input; std::cin >> input;
    if(!is_valid(input)) {
        std::cout << "0\n"; return 0;
    }

    std::stack<int> stack;
    for(char ch : input) {
        if(ch == '(' || ch == '[') stack.push(-1);
        else {
            int tmp = (ch == ')' ? 2 : 3);
            if(stack.top() > 0) {
                tmp *= stack.top();
                stack.pop();
            }

            stack.pop();

            if(!stack.empty() && stack.top() > 0) {
                tmp += stack.top();
                stack.pop();
            }

            stack.push(tmp);
        }
    }

    std::cout << stack.top() << '\n';

    return 0;
}

