#include <iostream>

// Створюємо короткі синоніми
typedef unsigned long long int ullong;
// typedef гіпер_довгий_тип_якого_не_існує myType; // абстрактний приклад

int main() {
    // Тепер замість unsigned long long int ми пишемо просто ullong
    ullong bigNumber = 18446744073709551615ULL;

    std::cout << bigNumber << std::endl;
    return 0;
}
