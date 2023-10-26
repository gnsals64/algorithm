#include <iostream>

using namespace std;

bool    IsGroupWord(string word) {
    int    checker[26] = {0, };

    for (int i = 0; i < word.size(); i++) {
        if ((checker[word[i] - 97]) == 1)
            return false;
        checker[word[i] - 97]++;
        while (word[i] == word[i + 1])
            i++;
    }
    return true;
}

int main() {
    int N;
    int group_word_cnt = 0;
    string word;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> word;
        if (IsGroupWord(word))
            group_word_cnt++;
    }
    cout << group_word_cnt << "\n";
    return 0;
}