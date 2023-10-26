#include <iostream>

using namespace std;

bool IsAlpha(string input, int *i, int *cnt) {
    int tmp = *cnt;

    if (input[*i] == 'c') {
        if (input[(*i) + 1] == '=')
            (*cnt)++;
        else if (input[(*i) + 1] == '-')
            (*cnt)++;
    }
    else if (input[*i] == 'd') {
        if (input[(*i) + 1] == 'z') {
            if (input[(*i) + 2] == '='){
                (*cnt)++;
                (*i)++;
            }
        }
        else if (input[(*i) + 1] == '-')
            (*cnt)++;
    }
    else if (input[*i] == 'l') {
        if (input[(*i) + 1] == 'j')
            (*cnt)++;
    }
    else if (input[*i] == 'n') {
        if (input[(*i) + 1] == 'j')
            (*cnt)++;
    }
    else if (input[*i] == 's') {
        if (input[(*i) + 1] == '=')
            (*cnt)++;
    }
    else if (input[*i] == 'z') {
        if (input[(*i) + 1] == '=')
            (*cnt)++;
    }
    if ((*cnt) != tmp) {
        (*i)++;
        return true;
    }
    return false;
}

int main() {
   string input;
   int    cnt = 0;

   cin >> input;
   for (int i = 0; i < input.length(); i++) {
        if (IsAlpha(input, &i, &cnt) == false)
            cnt++;
   }
   cout << cnt << "\n";
   return 0;
}