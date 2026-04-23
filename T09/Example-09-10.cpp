#include <iostream>
#include <fstream>

int main() {
    long long int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers); // Розмір усього масиву в байтах (5 * 4 = 20 байт)

    // === ЗАПИС БЛОКУ ДАНИХ ===
    std::ofstream outFile("array.bin", std::ios::binary);
    if (outFile.is_open()) {
        // Беремо адресу початку масиву, приводимо до char*, і вказуємо скільки байт писати
        outFile.write(reinterpret_cast<char *>(numbers), size);
        outFile.close();
        std::cout << "Масив записано у файл.\n";
    }

    // === ЧИТАННЯ БЛОКУ ДАНИХ ===
    int loadedNumbers[5] = {0}; // Порожній масив для завантаження
    std::ifstream inFile("array.bin", std::ios::binary);

    if (inFile.is_open()) {
        // Читаємо 20 байт з файлу прямо в оперативну пам'ять масиву loadedNumbers
        inFile.read(reinterpret_cast<char *>(loadedNumbers), size);
        inFile.close();

        std::cout << "Зчитаний масив: ";
        for (int i = 0; i < 5; i++) {
            std::cout << loadedNumbers[i] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
