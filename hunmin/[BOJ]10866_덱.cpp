#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int>  d;
    string      cmd;
    int         N;
    int         tmp;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> cmd;
        if (cmd == "push_front") {
            cin >> tmp;
            d.push_front(tmp);
        }
        else if(cmd == "push_back") {
            cin >> tmp;
            d.push_back(tmp);
        }
        else if (cmd == "pop_front") {
            if (d.size() == 0) 
                cout << "-1" << endl;
            else {
                cout << d.front() << endl;
                d.pop_front();
            }
        }
        else if (cmd == "pop_back") {
            if (d.size() == 0) 
                cout << "-1" << endl;
            else {
                cout << d.back() << endl;
                d.pop_back();
            }
        }
        else if (cmd == "empty") {
            if (d.size() == 0)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else if (cmd == "size") {
            cout << d.size() << endl;
        }
        else if (cmd == "front") {
            if (d.size() == 0) 
                cout << "-1" << endl;
            else
                cout << d.front() << endl;
        }
        else if (cmd == "back") {
            if (d.size() == 0) 
                cout << "-1" << endl;
            else
                cout << d.back() << endl;
        }
    }
}