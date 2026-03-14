#include <iostream>

// Оголошення (прототип). Кажемо: "Десь є така функція"
int add(int a, int b);

int main() {
    // Викликаємо. Компонувальник сам знайде її в math_operations.cpp
    std::cout << add(5, 3);
    return 0;
}
