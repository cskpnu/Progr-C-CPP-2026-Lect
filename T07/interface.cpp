#include <iostream>

// ОГОЛОШЕННЯ: пам'ять не виділяється.
// Ми кажемо: "Шукай globalScore в іншому місці!"
extern int globalScore;

void printScore() {
    // Працюємо з тією самою змінною з файлу game.cpp
    std::cout << "Поточний рахунок: " << globalScore << std::endl;
}
