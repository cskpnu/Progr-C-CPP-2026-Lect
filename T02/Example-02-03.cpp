// Example-02-03.cpp
#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number < 0) {
        number = -number; // Замінюємо число на його модуль
        cout << "Number was negative, changed to positive." << endl;
    }
    cout << "The absolute value is: " << number << endl;
    return 0;
}
