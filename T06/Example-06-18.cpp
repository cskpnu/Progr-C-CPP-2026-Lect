#include <iostream>

// 1. Створюємо кілька "функцій-правил" (усі повертають bool і приймають int)
bool isEven(int num) {
    return num % 2 == 0;
}
bool isPositive(int num) {
    return num > 0;
}

// 2. Наша універсальна функція.
// Другим параметром вона приймає вказівник на БУДЬ-ЯКУ функцію-правило!
void filterArray(int arr[], int size, bool (*checkCondition)(int)) {
    std::cout << "Результат фільтрації: ";
    for (int i = 0; i < size; ++i) {
        // Викликаємо передану функцію для перевірки поточного елемента
        if (checkCondition(arr[i])) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int numbers[6] = {12, -5, 7, 8, -3, 10};

    // Фільтруємо ТІЛЬКИ парні числа (передаємо функцію isEven)
    filterArray(numbers, 6, isEven);

    // Фільтруємо ТІЛЬКИ додатні числа (передаємо функцію isPositive)
    filterArray(numbers, 6, isPositive);

    return 0;
}
