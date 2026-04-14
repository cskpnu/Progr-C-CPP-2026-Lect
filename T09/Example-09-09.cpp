#include <fstream>

int main() {
    // Відкриваємо файл виключно для двійкового запису
    std::ofstream binOut("data.bin", std::ios::out | std::ios::binary);

    // Відкриваємо файл виключно для двійкового зчитування
    std::ifstream binIn("data.dat", std::ios::in | std::ios::binary);

    return 0;
}