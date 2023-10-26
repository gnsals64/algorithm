#include <iostream>

using namespace std;

double grade_table(string grade) {
    if (grade == "A+")
        return 4.5;
    else if (grade == "A0")
        return 4.0;
    else if (grade == "B+")
        return 3.5;
    else if (grade == "B0")
        return 3.0;
    else if (grade == "C+")
        return 2.5;
    else if (grade == "C0")
        return 2.0;
    else if (grade == "D+")
        return 1.5;
    else if (grade == "D0")
        return 1.0;
    else
        return 0;
}

int main() {
    string subject_name;
    double credit;
    string grade;
    double sum = 0;
    int    subject_cnt = 0;

    for (int i = 0; i < 20; i++) {
        cin >> subject_name >> credit >> grade;
        if (grade != "P") {
            sum += credit * grade_table(grade);
            subject_cnt += credit;
        }
    }
    cout << sum / subject_cnt << "\n";
    return 0;
}