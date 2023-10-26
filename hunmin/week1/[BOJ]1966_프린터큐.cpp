#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main() {
    int num;

    cin >> num;
    for (int i = 0; i < num; i++) {
        int size;
        int print_num;
        bool is_end = true;
        int cnt = 0;
        queue<pair<int, int>> q;
        priority_queue<int> pq;

        cin >> size >> print_num;
        for (int j = 0; j < size; j++) {
            int elements;
            cin >> elements;
            q.push({elements, j});
            pq.push(elements);
        }
        while (!pq.empty() && is_end){
            while (q.front().first != pq.top()) {
                q.push(q.front());
                q.pop();
            }
            pq.pop();
            if (q.front().second == print_num)
                is_end = false;
            q.pop();
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}