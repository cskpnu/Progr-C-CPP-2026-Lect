#include <iostream>

using namespace std;

int main() {
    int var = 10;       // Звичайна змінна
    int *ptr = &var;    // Вказівник (зберігає адресу var)
    int **pptr = &ptr;  // Вказівник на вказівник (зберігає адресу ptr)

    // Виведення значень
    cout << "var = " << var << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "**pptr = " << **pptr << endl; // Подвійне розіменування

    // Виведення адрес
    cout << "&var = " << &var << endl;     // Адреса змінної
    cout << "ptr = " << ptr << endl;       // Те саме (адреса змінної)
    cout << "*pptr = " << *pptr << endl;   // Те саме (значення ptr)

    cout << "&ptr = " << &ptr << endl;     // Адреса самого вказівника ptr
    cout << "pptr = " << pptr << endl;     // Те саме (значення pptr)

    return 0;
}
