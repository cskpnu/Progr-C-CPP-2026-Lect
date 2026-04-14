#include <fstream>

int main() {
    std::ofstream outFile("stats.txt");
    if (outFile.is_open()) {
        int level = 5;
        double health = 89.5;

// Правильно: розділяємо дані пробілом та перенесенням рядка
        outFile << "Player1" << " " << level << " " << health << "\n";
        outFile.close();
    }
}