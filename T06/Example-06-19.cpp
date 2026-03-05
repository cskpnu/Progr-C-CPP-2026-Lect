#include <iostream>
#include <cstdarg> // Обов'язкова бібліотека

// Перший параметр - скільки чисел ми передаємо. Далі - самі числа.
int calculateSum(int count, ...) {
    int total = 0;

    // 1. Створюємо "читача" списку
    va_list args;

    // 2. Налаштовуємо його на старт (одразу після змінної 'count')
    va_start(args, count);

    // Перебираємо аргументи в циклі
    for (int i = 0; i < count; ++i) {
        // 3. Читаємо поточний аргумент як 'int' і додаємо до суми.
        // va_arg автоматично перейде до наступного числа!
        total += va_arg(args, int);
    }

    // 4. Обов'язкове прибирання
    va_end(args);

    return total;
}

int main() {
    // Передаємо 3 числа: 10, 20, 30
    std::cout << "Сума 3 чисел: " << calculateSum(3, 10, 20, 30) << std::endl;

    // Передаємо 5 чисел: 1, 2, 3, 4, 5
    std::cout << "Сума 5 чисел: " << calculateSum(5, 1, 2, 3, 4, 5) << std::endl;

    return 0;
}
