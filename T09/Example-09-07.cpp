#include <iostream>
#include <fstream>
#include <string>

int main() {
    // === ЕТАП 1: ЗАПИС У ФАЙЛ ===
    /*
    std::ofstream outFile("point.txt");
    if (outFile.is_open()) {
        std::string pointName = "Alpha+";
        double x = 45.56;
        double y = -125.3;

        // Записуємо дані, розділяючи їх пробілами
        outFile << pointName << " " << x << " " << y << "\n";
        outFile.close();
        std::cout << "Дані успішно записано у файл point.txt\n";
    }
*/
    // === ЕТАП 2: ЗЧИТУВАННЯ З ФАЙЛУ ===
    std::ifstream inFile("point.txt");
    if (inFile.is_open()) {
        std::string loadedName;
        double loadedX, loadedY;

        // Зчитуємо дані в тому ж порядку, в якому записували.
        // Оператор >> сам "перестрибне" через пробіли.
        inFile >> loadedName >> loadedX >> loadedY;

        std::cout << "\nЗчитані дані з файлу:\n";
        std::cout << "Назва: " << loadedName << "\n";
        std::cout << "Координата X: " << loadedX << "\n";
        std::cout << "Координата Y: " << loadedY << "\n";

        inFile.close();
    } else {
        std::cerr << "Не вдалося відкрити файл для читання!\n";
    }

    return 0;
}