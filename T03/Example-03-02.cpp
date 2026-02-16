#include <iostream>

using namespace std;

int main() {
    int num = 10;
    double pi = 3.14;

    void *gptr;      // Оголошення узагальненого вказівника

    gptr = &num;     // Вказуємо на int
    // cout << *gptr; // ПОМИЛКА! Неможливо розіменувати void*

    // Явне приведення типу до (int*) перед розіменуванням
    cout << "Integer: " << *(int *) gptr << endl;

    gptr = &pi;      // Тепер вказуємо на double
    // Приведення типу до (double*)
    cout << "Double:  " << *(double *) gptr << endl;

    return 0;
}
