#include <iostream>
#include <fstream>

int main() {
    // Відкриваємо файл одночасно для читання та запису в бінарному режимі
    std::fstream file("data.bin", std::ios::in | std::ios::out | std::ios::binary);

    if (file.is_open()) {
        int targetIndex = 2; // Хочемо дістатися до третього числа
        int offset = targetIndex * sizeof(int); // Вираховуємо зміщення у байтах

        // 1. Переміщуємо вказівник читання до потрібного місця
        file.seekg(offset, std::ios::beg);

        // 2. Читаємо старе значення
        int oldValue;
        file.read(reinterpret_cast<char*>(&oldValue), sizeof(int));
        std::cout << "Старе значення: " << oldValue << "\n";

        // 3. Після читання вказівник зсунувся вперед!
        // Щоб ПЕРЕЗАПИСАТИ це ж число, нам треба повернутися на крок назад
        file.seekp(offset, std::ios::beg);

        // 4. Записуємо нове значення поверх старого
        int newValue = 999;
        file.write(reinterpret_cast<char*>(&newValue), sizeof(int));
        std::cout << "Записано нове значення: " << newValue << "\n";

        file.close();
    }
    return 0;
}

int fclose(FILE* stream);