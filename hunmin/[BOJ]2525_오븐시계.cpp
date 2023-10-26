#include <iostream>

using namespace std;

int main() {
    int hh;
    int mm;
    int time;

    cin >> hh;
    cin >> mm;
    cin >> time;


    hh += (mm + time) / 60;
    mm = (mm + time) % 60;

    if (hh > 23) {
        hh %= 24;
    }
    cout << hh << " " << mm << "\n";
    return 0;
}