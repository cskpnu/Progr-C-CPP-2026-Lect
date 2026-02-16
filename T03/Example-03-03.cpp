#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr; // Вказівник на початок (на 10)

    cout << *p << endl;   // Виведе 10

    // Варіант 1:
    cout << *p++ << endl; // Виведе 10, потім p перейде на 20
    cout << *p << endl;   // Виведе 20

    // Варіант 2:
    // (*p)++;            // Змінив би 20 на 21

    return 0;
}
