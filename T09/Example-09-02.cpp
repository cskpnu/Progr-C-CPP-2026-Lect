#include <fstream>

int main() {
    std::ofstream myFile; // Створюємо об'єкт (поки що "порожній")

    // Відкриваємо файл (зв'язуємо об'єкт з файлом на диску)
    myFile.open("data.txt");

    // ... робота з файлом ...

    return 0;
}