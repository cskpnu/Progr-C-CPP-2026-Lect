// Example-01-05
#include <iostream>
#include <windows.h> // Потрібна для зміни кодування консолі

int main() {
    // Встановлюємо кодову сторінку 65001 (це код для UTF-8)
    SetConsoleOutputCP(65001);

    std::cout << "Привіт, студенте!" << std::endl;
    // Тепер українська мова відображається коректно

    return 0;
}
