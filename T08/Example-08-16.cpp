#include <iostream>
#include <list>
#include <string>

void printList(const std::string &name, const std::list<std::string> &l) {
    std::cout << name << ": ";
    for (const auto &item: l) {
        std::cout << "[" << item << "] -> ";
    }
    std::cout << "NULL\n";
}

int main() {
    std::list<std::string> document = {"Вступ", "Висновок"};
    std::list<std::string> clipboard = {"Розділ 1", "Розділ 2", "Розділ 3"};

    // 1. Вставка в середину (швидко)
    // Шукаємо ітератор, куди будемо вставляти (наприклад, перед "Висновок")
    auto it = document.begin();
    it++; // Тепер it вказує на "Висновок"

    // Вставляємо новий текст
    document.insert(it, "Методологія");
    printList("Документ після insert", document);

    // 2. Використання SPLICE (Магія вказівників)
    // Ми хочемо перенести ВСЕ з clipboard у document перед "Висновок" (наш it).
    // Дані не копіюються! Вузли просто "відчіпляються" і "причіпляються".
    document.splice(it, clipboard);

    std::cout << "\n--- Після операції SPLICE ---\n";
    printList("Документ", document);
    printList("Буфер обміну (clipboard)", clipboard); // Тепер він порожній!

    // 3. Вбудоване сортування
    document.sort(); // Сортування за алфавітом
    std::cout << "\nПісля document.sort():\n";
    printList("Документ", document);

    return 0;
}
