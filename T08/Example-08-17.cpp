#include <iostream>
#include <forward_list>
#include <string>

void printList(const std::forward_list<std::string> &list) {
    // Перевірка на порожнечу - єдиний швидкий спосіб, бо size() немає
    if (list.empty()) {
        std::cout << "Список порожній.\n";
        return;
    }
    for (const auto &item: list) {
        std::cout << item << " -> ";
    }
    std::cout << "NULL\n";
}

int main() {
    // 1. Створення та базове додавання (тільки на початок)
    std::forward_list<std::string> steps;
    steps.push_front("Крок 3");
    steps.push_front("Крок 2");
    steps.push_front("Крок 1"); // Тепер це голова

    std::cout << "Початковий список:\n";
    printList(steps);

    // 2. Вставка "ПІСЛЯ"
    // Знайдемо "Крок 2" і вставимо після нього "Крок 2.5"
    auto it = steps.begin();
    it++; // Пересуваємось на "Крок 2"

    steps.insert_after(it, "Крок 2.5");

    std::cout << "\nПісля insert_after:\n";
    printList(steps);

    // 3. Використання before_begin()
    // Як вставити "Крок 0" перед "Крок 1" використовуючи insert_after?
    steps.insert_after(steps.before_begin(), "Крок 0");

    std::cout << "\nПісля before_begin() + insert_after:\n";
    printList(steps);

    // 4. Видалення "ПІСЛЯ"
    // Видалимо елемент, який йде ПІСЛЯ "Крок 0" (тобто "Крок 1")
    steps.erase_after(steps.begin());

    std::cout << "\nПісля erase_after (видалили Крок 1):\n";
    printList(steps);

    return 0;
}
