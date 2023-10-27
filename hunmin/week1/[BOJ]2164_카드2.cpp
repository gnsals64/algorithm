#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int>  q;
    int         N;

    cin >> N;
    for (int i = 1; i <= N; i++)
        q.push(i);
    for (int i = 1; q.size() != 1; i++) {
        if (i % 2 == 1)
            q.pop();
        else {
            q.push(q.front());
            q.pop();
        }
    }
    cout << q.front() << "\n";
    return 0;
}