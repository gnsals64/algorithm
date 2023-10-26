#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<int> s;
    std::string     cmd;
    int             N;

    std::cin >> N;

    for (int i = 0; i < N; i ++) {
        std::cin >> cmd;
        if (cmd == "push") {
            std::string tmp;
            std::cin >> tmp;
            s.push(std::stoi(tmp));
        }
        else if (cmd == "pop") {
            if (s.size() == 0)
                std::cout << "-1" << std::endl;
            else {
                std::cout << s.top() << std::endl;
                s.pop();
            }
        }
        else if (cmd == "size") {
            std::cout << s.size() << std::endl;
        }
        else if (cmd == "empty") {
            if (s.size() == 0)
                std::cout << "1" << std::endl;
            else
                std::cout << "0" << std::endl;
        }
        else if (cmd == "top") {
            if (s.size() == 0)
                std::cout << "-1" << std::endl;
            else
                std::cout << s.top() << std::endl;
        }
    }
}