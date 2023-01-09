// BOJ 18258 큐 2
// LINK: https://www.acmicpc.net/problem/18258
// DSA: Queue

#include <iostream>
#include <queue>

int main(void) {
    std::cin.sync_with_stdio(false); std::cin.tie(nullptr);

    std::queue<int> q;

    int N; std::cin >> N;
    while(N--) {
        std::string input; std::cin >> input;
        if(input == "push") {
            int tmp; std::cin >> tmp;
            q.push(tmp);
        }else if(input == "size") {
            std::cout << q.size() << '\n';
        }else if(input == "empty") {
            std::cout << (q.empty() ? "1\n" : "0\n");
        }else {
            if(q.empty()) std::cout << "-1\n";
            else
                switch(input[0]) {
                    case 'p':
                        std::cout << q.front() << '\n'; q.pop();
                        break;

                    case 'f':
                        std::cout << q.front() << '\n';
                        break;

                    default:
                        std::cout << q.back() << '\n';
                        break;
                }
        }
    }

    return 0;
}

