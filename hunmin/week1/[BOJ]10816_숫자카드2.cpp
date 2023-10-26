#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
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
        cout << m[tmp] << " ";
    }
    return 0;
}