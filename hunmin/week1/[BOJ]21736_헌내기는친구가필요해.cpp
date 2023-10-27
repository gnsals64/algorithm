#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int     check[601][601] = {0, };
char    map[601][601] = {0, };

void    run(int i, int j, int *cnt) {
    if (check[i][j] == 1)
        return ;
    else if (map[i][j] == 'P') {
        check[i][j] = 1;
        (*cnt)++;
    }
    else if (map[i][j] == 'X')
        return ;
    else if (map[i][j] == 'O') {
        check[i][j] = 1;
    }
    else if (map[i][j] == 'I'){
        check[i][j] = 1;
    }
    else
        return ;
    run(i + 1, j, cnt);
    run(i, j + 1, cnt);
    if (i != 0)
        run(i - 1, j, cnt);
    if (j != 0)
        run(i, j - 1, cnt);
}

int main() {
    int     N, M;
    int     start_i, start_j;
    char    c;
    int     cnt = 0;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> c;
            map[i][j] = c;
            if (c == 'I') {
                start_i = i;
                start_j = j;
            }
        }
    }
    run(start_i, start_j, &cnt);
    if (cnt == 0)
        cout << "TT" << "\n";
    else
        cout << cnt << "\n";
    return 0;
}