#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream myDoc("poem.txt");

    if (!myDoc.is_open()) {
        std::cerr << "Помилка: файл не знайдено!\n";
        return 1;
    }

    std::string currentLine;
    int lineNumber = 1;

    std::cout << "--- Вміст файлу ---\n";

    // Цикл працюватиме, поки getline успішно зчитує нові рядки
    while (std::getline(myDoc, currentLine)) {
        std::cout << lineNumber << ": " << currentLine << "\n";
        lineNumber++;
    }

    std::cout << "--- Кінець файлу ---\n";
    myDoc.close(); // закриється автоматично
    return 0;
}

int age;
std::string fullName;

inFile >> age;
inFile.ignore(); // "Ковтаємо" один символ (той самий проблемний \n)
std::getline(inFile, fullName); // Тепер усе зчитається ідеально!
