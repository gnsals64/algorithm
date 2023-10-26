#include <iostream>

using namespace std;

int main() {
    string input;
    int check_alpha[26] = {0, };

    cin >> input;

    for (int i = 0; i < input.size(); i++) {
        check_alpha[input[i] - 97]++;
    }
    
    for (int i = 0; i < 26; i++) {
        cout << check_alpha[i];
        if (i != 25)
            cout << " ";
        else
            cout << "\n";
    }
    return 0;
}