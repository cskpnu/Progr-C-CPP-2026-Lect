#include <iostream>

void staticCounter() {
    // Цей рядок спрацює ТІЛЬКИ один раз при першому виклику!
    static int count = 0;

    count++; // Збільшуємо збережене значення
    std::cout << count << " ";
}

int main() {
    staticCounter(); // Виведе 1
    staticCounter(); // Виведе 2
    staticCounter(); // Виведе 3
    staticCounter();
    staticCounter();
    staticCounter();
    staticCounter();
    return 0;
}
