#include <iostream>

// Дві звичайні функції з однаковою "сигнатурою" (приймають два int, повертають int)
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Оголошуємо вказівник на функцію
    int (*operationPtr)(int, int);

    // Націлюємо вказівник на функцію add (передаємо лише ім'я, без дужок!)
    operationPtr = add;
    std::cout << "Додавання: " << operationPtr(5, 3) << std::endl; // Виведе 8

    // Змінюємо ціль вказівника на функцію multiply
    operationPtr = multiply;
    std::cout << "Множення: " << operationPtr(5, 3) << std::endl; // Виведе 15

    return 0;
}
