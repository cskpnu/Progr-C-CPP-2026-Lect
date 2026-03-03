#include <iostream>

void addBonus(int score) {
    score = score + 10; // Змінюється лише КОПІЯ
}

int main() {
    int myScore = 50;
    addBonus(myScore);
    std::cout << myScore; // Виведе 50. Оригінал не змінився!
}
