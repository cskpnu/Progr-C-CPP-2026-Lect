#include <iostream>
#include <stack>
#include <string>

int main() {
    // Створюємо стек для зберігання історії відвіданих сторінок
    std::stack<std::string> history;

    std::cout << "--- Серфінг в інтернеті ---\n";

    // Користувач переходить по сторінках
    history.push("google.com");
    std::cout << "Відкрито: " << history.top() << "\n";

    history.push("wikipedia.org/C++");
    std::cout << "Відкрито: " << history.top() << "\n";

    history.push("stackoverflow.com/questions");
    std::cout << "Відкрито: " << history.top() << "\n";

    std::cout << "\n--- Натискаємо кнопку 'Назад' ---\n";

    // Перевіряємо, чи є куди повертатися
    while (!history.empty()) {
        std::cout << "Поточна сторінка: " << history.top() << "\n";

        // Видаляємо поточну сторінку (робимо крок назад)
        history.pop();

        if (!history.empty()) {
            std::cout << " -> Повернення на попередню...\n";
        } else {
            std::cout << " -> Історія порожня. Вікно закрито.\n";
        }
    }

    return 0;
}
