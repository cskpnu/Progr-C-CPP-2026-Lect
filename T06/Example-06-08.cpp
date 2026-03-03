#include <iostream>

// Функція приймає масив та його розмір.
// Зверніть увагу: квадратні дужки порожні!
void modifyAndPrintArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = arr[i] * 2; // Змінюємо кожен елемент (це змінить оригінал!)
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    // Передаємо лише НАЗВУ масиву (це і є адреса першого елемента) та його розмір
    modifyAndPrintArray(numbers, 5);

    // Перевіряємо оригінал
    std::cout << "Оригінал після функції: " << numbers[0]; // Виведе 2, а не 1!

    return 0;
}