// BOJ 10866 덱
// LINK: https://www.acmicpc.net/problem/10866
// DSA: Deque

#include <iostream>
#include <string>
#include <deque>

int main(void) {
    std::cin.tie(NULL); std::cin.sync_with_stdio(false);
    int N; std::cin >> N;
    std::string command; int num;
    std::deque<int> q;
    while(N--) {
        std::cin >> command;
        if(command == "push_back") {
            std::cin >> num; q.push_back(num);
        }else if(command == "push_front") {
            std::cin >> num; q.push_front(num);
        }else if(command == "front") {
            if(q.empty()) {
                std::cout << "-1\n";
            }else {
                std::cout << q.front()<< "\n";
            }
        }else if(command == "back") {
            if(q.empty()) {
                std::cout << "-1\n";
            }else {
                std::cout << q.back()<< "\n";
            }
        }else if(command == "pop_front") {
            if(q.empty()) {
                std::cout << "-1\n";
            }else {
                std::cout << q.front() << "\n"; q.pop_front();
            }
        }else if(command == "pop_back") {
            if(q.empty()) {
                std::cout << "-1\n";
            }else {
                std::cout << q.back() << "\n"; q.pop_back();
            }
        }else if(command == "size") {
            std::cout << q.size() << "\n";
        }else if(command == "empty") {
            std::cout << (q.empty() ? "1" : "0") << "\n";
        }
    }
    return 0;
}
