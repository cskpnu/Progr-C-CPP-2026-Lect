#include <iostream>

// Додали &, тепер score - це лише друге ім'я для myScore
void addBonus(int &score) {
    score = score + 10; // Змінюється ОРИГІНАЛ
}

int main() {
    int myScore = 50;
    addBonus(myScore);
    std::cout << myScore; // Виведе 60!
}
