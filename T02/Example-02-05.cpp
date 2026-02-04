// Example-02-05.cpp
#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Введіть ціле число: ";
    cin >> x;
    if (x > 0) {
        y = 1;      // Якщо додатне
    } else if (x < 0) {
        y = -1;     // Якщо від'ємне
    } else {
        y = 0;      // Якщо нуль (жодна з попередніх умов не спрацювала)
    }
    cout << "Значення y: " << y << endl;
    return 0;
}