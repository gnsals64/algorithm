#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    std::string     cmd;
    int             N;

    std::cin >> N;

    for (int i = 0; i < N; i ++) {
        std::cin >> cmd;
        if (cmd == "push") {
            std::string tmp;
            std::cin >> tmp;
            q.push(std::stoi(tmp));
        }
        else if (cmd == "pop") {
            if (q.size() == 0)
                std::cout << "-1" << std::endl;
            else {
                std::cout << q.front() << std::endl;
                q.pop();
            }
        }
        else if (cmd == "size") {
            std::cout << q.size() << std::endl;
        }
        else if (cmd == "empty") {
            if (q.size() == 0)
                std::cout << "1" << std::endl;
            else
                std::cout << "0" << std::endl;
        }
        else if (cmd == "front") {
            if (q.size() == 0)
                std::cout << "-1" << std::endl;
            else
                std::cout << q.front() << std::endl;
        }
        else if (cmd == "back") {
            if (q.size() == 0)
                std::cout << "-1" << std::endl;
            else
                std::cout << q.back() << std::endl;
        }
    }
}