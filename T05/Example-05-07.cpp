#include <iostream>
#include <string>

struct Product {
    std::string name;
    double price;
};

int main() {
    Product apple = {"Яблуко", 25.5};

    // Створюємо вказівник на структуру
    Product* pProduct = &apple;

    // Звертаємось до полів оригінального об'єкта: використовуємо КРАПКУ
    std::cout << "Товар: " << apple.name << std::endl;

    // Звертаємось до полів через вказівник: використовуємо СТРІЛКУ
    std::cout << "Ціна: " << pProduct->price << std::endl;

    // Змінюємо дані через вказівник
    pProduct->price = 30.0;

    std::cout << "Нова ціна яблука: " << apple.price << std::endl;

    return 0;
}
