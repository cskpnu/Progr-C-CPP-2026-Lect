#include <iostream>

// Приймаємо вказівник (адресу пам'яті)
void addBonus(int *pScore) {
    *pScore = *pScore + 10; // Звертаємось до значення за адресою
}

int main() {
    int myScore = 50;
    addBonus(&myScore); // Передаємо АДРЕСУ змінної
    std::cout << myScore; // Виведе 60!
}
