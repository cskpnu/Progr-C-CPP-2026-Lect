#include <iostream>
#include <fstream>

int main() {
    // Відкриваємо файл і одразу ставимо вказівник у кінець (ate - At End)
    std::ifstream file("point.txt", std::ios::ate | std::ios::binary);

    if (file.is_open()) {
        // Запитуємо поточну позицію (яка зараз є кінцем файлу)
        std::streampos fileSize = file.tellg();
        std::cout << "Розмір файлу: " << fileSize << " байт.\n";
        file.close();
    }
    return 0;
}