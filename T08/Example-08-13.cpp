#include <iostream>
#include <array>
#include <algorithm>
#include <string>

// Функція приймає об'єкт std::array за посиланням.
// Вона знає розмір масиву автоматично!
void printStatus(const std::array<int, 4> &sensors) {
    std::cout << "Дані сенсорів (" << sensors.size() << "): ";
    for (int val: sensors) {
        std::cout << "[" << val << "] ";
    }
    std::cout << std::endl;
}

int main() {
    // Створення та ініціалізація
    std::array<int, 4> mySensors = {45, 12, 88, 34};

    // 1. Сортування за допомогою STL алгоритму
    std::sort(mySensors.begin(), mySensors.end());

    // 2. Безпечний доступ
    try {
        int index;
        std::cout << "Введіть номер сенсора (0-3): ";
        std::cin >> index;

        // Метод .at() захищає від "падіння" програми при неправильному вводі
        std::cout << "Значення: " << mySensors.at(index) << std::endl;
    }
    catch (const std::out_of_range &e) {
        std::cerr << "Помилка: Невірний індекс! Деталі: " << e.what() << std::endl;
    }

    // 3. Заповнення масиву одним значенням (скидання)
    mySensors.fill(0);
    printStatus(mySensors);

    return 0;
}
