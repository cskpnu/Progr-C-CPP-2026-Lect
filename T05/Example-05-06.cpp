#include <iostream>
#include <string>

struct Product {
    std::string name;
    double price;
};

int main() {
    const int SIZE = 3;
    Product catalog[SIZE]; // Масив із 3 товарів

    // 1. Введення даних у масив структур
    std::cout << "--- Введення даних ---" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Товар #" << i + 1 << ":" << std::endl;

        std::cout << "Назва: ";
        std::cin >> catalog[i].name; // Спрощене введення (без пробілів)

        std::cout << "Ціна: ";
        std::cin >> catalog[i].price;
    }

    // 2. Обробка даних (наприклад, пошук дорогих товарів)
    std::cout << "\n--- Товари, дорожчі за 100 грн ---" << std::endl;
    bool found = false;
    for (int i = 0; i < SIZE; ++i) {
        if (catalog[i].price > 100.0) {
            std::cout << catalog[i].name << " (" << catalog[i].price << " грн)" << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "Таких товарів не знайдено." << std::endl;
    }
    return 0;
}
