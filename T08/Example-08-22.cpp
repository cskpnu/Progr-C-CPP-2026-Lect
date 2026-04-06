#include <iostream>
#include <set>

int main() {
    std::set<int> uniqueNumbers;

    uniqueNumbers.insert(10);
    uniqueNumbers.insert(5);
    uniqueNumbers.insert(10); // Дублікат! Буде проігноровано.
    uniqueNumbers.insert(20);

    std::cout << "Кількість елементів: " << uniqueNumbers.size() << "\n"; // Виведе 3

    // Елементи зберігаються відсортовано: 5, 10, 20
    for (int num: uniqueNumbers) {
        std::cout << num << " ";
    }

    // Швидка перевірка наявності (сучасний метод C++20 - contains)
    // У старіших версіях використовували .find() або .count()

    if (uniqueNumbers.count(10)) {
        std::cout << "\nЧисло 10 є у множині!\n";
    }


    return 0;
}
