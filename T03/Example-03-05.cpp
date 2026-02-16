#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr; // Вказівник ініціалізується іменем масиву

    // Доступ через індекс
    cout << "arr[1]:   " << arr[1] << endl;

    // Доступ через адресну арифметику
    cout << "*(arr+1): " << *(arr + 1) << endl;

    // Доступ через вказівник
    cout << "*(p+1):   " << *(p + 1) << endl;
    cout << "p[1]:     " << p[1] << endl; // Вказівник теж можна індексувати!

    return 0;
}
