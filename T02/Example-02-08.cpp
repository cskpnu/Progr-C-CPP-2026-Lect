// Example-02-08.cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Digits: ";
    while (n > 0) {
        int digit = n % 10; // Беремо останню цифру
        cout << digit << " ";
        n = n / 10;         // Відкидаємо останню цифру
    }
    // Якщо ввести 123, виведе: 3 2 1
    return 0;
}
