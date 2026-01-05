#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;
    if (totalSeconds >= 0) {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;
        cout << "HH:MM:SS = " << hours << ":" << minutes << ":" << seconds;
    }
}