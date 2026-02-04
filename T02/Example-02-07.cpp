// Example-02-07.cpp
#include <iostream>

using namespace std;

int main() {
    char op; // Операція: +, -, *, /
    double a, b;
    cout << "Enter expression (e.g., 2 + 2): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << "Result: " << a + b;
            break; // Обов'язковий вихід з switch
        case '-':
            cout << "Result: " << a - b;
            break;
        case '*':
            cout << "Result: " << a * b;
            break;
        case '/':
            if (b != 0)
                cout << "Result: " << a / b;
            else
                cout << "Error: Division by zero!";
            break;
        default:
// Спрацює, якщо введено невідомий символ, наприклад '$'
            cout << "Unknown operation";
    }
    return 0;
}