#include <algorithm>
#include <array>
#include <iostream>

int main() {
    std::array<int, 6> numbers = {5, 2, 9, 1, 5, 6};

// Сортування масиву
    std::sort(numbers.begin(), numbers.end());

    // виведення відсортованого масиву
    for (const auto &num: numbers) {
        std::cout << num << " ";
    }
// Пошук елемента
    auto it = std::find(numbers.begin(), numbers.end(), 9);


    if (it != numbers.end()) {
        std::cout << "\nЗнайдено число 9 на позиції: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "\nЧисло 9 не знайдено в масиві." << std::endl;
    }

// Реверс (розвертання) масиву
    std::reverse(numbers.begin(), numbers.end());

    std::cout << "Масив після реверсу: ";
    for (const auto &num: numbers) {
        std::cout << num << " ";
    }
}