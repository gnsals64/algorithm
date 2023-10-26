#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int N;
    int tmp;
    map<int, int> m;

    cin >> N;
    while (N--) {
        cin >> tmp;
        m[tmp]++;
    }
    cin >> N;
    while (N--) {
        cin >> tmp;
        auto it = m.find(tmp);
        if (it != m.end())
            std::cout << it->second << " ";
        else
            std::cout << "0" << " ";
    }
    return 0;
}