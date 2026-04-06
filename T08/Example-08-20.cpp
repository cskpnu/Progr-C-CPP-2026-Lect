#include <iostream>
#include <utility>
#include <string>

int main() {
    // Створюємо пару: Рядок (ім'я) та Ціле число (вік)
    std::pair<std::string, int> person = {"Олексій", 25};

    // Або використовуючи функцію std::make_pair
    auto coordinates = std::make_pair(48.5, 32.1);

    std::cout << "Ім'я: " << person.first << ", Вік: " << person.second << "\n";
    return 0;
}
