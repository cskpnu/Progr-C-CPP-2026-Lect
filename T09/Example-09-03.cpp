#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("config.ini");

    if (!inputFile.is_open()) {
        std::cerr << "Помилка: не вдалося відкрити файл!\n";
// Обробка помилки (наприклад, завершення програми або створення стандартного конфігу)
    } else {
        std::cout << "Файл успішно відкрито!\n";
// Можна безпечно працювати з файлом
    }
}