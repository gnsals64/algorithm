#include <iostream>

using namespace std;

int main() {
    int N;
    int cnt = 0;

    cin >> N;
    while (N >= 0) {
        if (N % 5 == 0 || N == 0) {
            cnt += (N / 5);
            cout << cnt << "\n";
            return 0;
        }
        N -= 3;
        cnt++;
    }
    cout << -1 << "\n";
    return 0;
}