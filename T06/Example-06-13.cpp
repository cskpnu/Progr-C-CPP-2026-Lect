#include <iostream>
#include <string>

// Наша структура
struct Product {
    std::string name;
    double price;
};

// Функція ПОВЕРТАЄ структуру типу Product
Product createProduct(std::string n, double p) {
    Product temp;
    temp.name = n;
    temp.price = p;
    return temp; // Віддаємо готову структуру
}

// Функція ПРИЙМАЄ структуру за константним посиланням (тільки читання)
void showProduct(const Product& prod) {
    std::cout << "Товар: " << prod.name << ", Ціна: " << prod.price << " грн\n";
}

// Функція ПРИЙМАЄ структуру за посиланням (для зміни)
void applyDiscount(Product& prod, double percent) {
    prod.price -= prod.price * (percent / 100.0);
}

int main() {
    // Створюємо товар за допомогою функції
    Product laptop = createProduct("Ноутбук", 25000.0);

    showProduct(laptop); // Виведе 25000

    // Робимо знижку 10%
    applyDiscount(laptop, 10.0);

    showProduct(laptop); // Виведе 22500

    return 0;
}
