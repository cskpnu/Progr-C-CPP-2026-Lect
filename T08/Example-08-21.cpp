#include <iostream>
#include <map>
#include <string>

int main() {
    // Ключ - номер авто (рядок), Значення - ім'я власника (рядок)
    std::map<std::string, std::string> carRegistry;

    // Додавання елементів (під капотом створюються std::pair)
    carRegistry["AA1234BB"] = "Іван Франко";
    carRegistry["BC9876AO"] = "Леся Українка";

    // Додавання через метод insert (передаємо пару)
    carRegistry.insert({"KA0001KA", "Тарас Шевченко"});

    // Пошук за ключем працює майже миттєво!
    std::cout << "Власник AA1234BB: " << carRegistry["AA1234BB"] << "\n\n";

    // Перебір словника. Елемент словника - це std::pair!
    // Зверніть увагу: вони виведуться відсортованими за алфавітом ключів!
    for (const auto &pair: carRegistry) {
        std::cout << "Номер: " << pair.first << " -> Власник: " << pair.second << "\n";
    }

    return 0;
}
