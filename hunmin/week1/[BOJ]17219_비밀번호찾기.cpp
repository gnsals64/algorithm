#include <iostream>
#include <map>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N, M;
    string site, passwd;
    map<string, string> m;

    cin >> N >> M;
    while (N--) {
        cin >> site >> passwd;
        m[site] = passwd;
    }
    while (M--) {
        cin >> site;
        cout << m[site] << "\n";
    }
    return 0;
}