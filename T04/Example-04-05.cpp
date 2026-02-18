#include "iostream"
#include "string"

using namespace std;

int main() {
    int age;
    string name;

    cout << "Введіть вік: ";
    cin >> age;               // 1. Вводимо число (наприклад, 20) і тиснемо Enter

    cin.ignore(); // "З'їдає" символ переходу на новий рядок із буфера

    cout << "Введіть ім'я: ";
    getline(cin, name);       // 2. Цей рядок "проскакує"! Введення не відбувається.

    cout << "Вік: " << age << ", Ім'я: " << name << endl;

    return 0;
}