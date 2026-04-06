#include <iostream>
#include <queue>
#include <string>

// Структура для зберігання інформації про заявку
struct Ticket {
    int id;
    std::string issue;
};

int main() {
    // Створюємо чергу заявок
    std::queue<Ticket> helpdesk;

    std::cout << "--- Надходження нових заявок ---\n";

    // Користувачі створюють заявки (стають у чергу)
    helpdesk.push({101, "Не працює інтернет"});
    std::cout << "Заявка #101 додана. У черзі: " << helpdesk.size() << "\n";

    helpdesk.push({102, "Забув пароль від пошти"});
    std::cout << "Заявка #102 додана. У черзі: " << helpdesk.size() << "\n";

    helpdesk.push({103, "Синій екран смерті"});
    std::cout << "Заявка #103 додана. У черзі: " << helpdesk.size() << "\n";

    // Можемо подивитися, хто перший, а хто останній
    std::cout << "\nНаступний на обробку: #" << helpdesk.front().id << "\n";
    std::cout << "Останній у черзі: #" << helpdesk.back().id << "\n";

    std::cout << "\n--- Робота оператора ---\n";

    // Оператор обробляє заявки, поки черга не спорожніє
    while (!helpdesk.empty()) {
        // 1. Беремо першу заявку в черзі (читаємо дані)
        Ticket current = helpdesk.front();

        std::cout << "Обслуговується заявка #" << current.id
                  << " (Проблема: " << current.issue << ")...\n";

        // 2. Видаляємо заявку з черги (вона виконана)
        helpdesk.pop();

        std::cout << "  -> Вирішено! Залишилося заявок: " << helpdesk.size() << "\n";
    }

    std::cout << "Всі заявки оброблені. Робочий день завершено!\n";

    return 0;
}
