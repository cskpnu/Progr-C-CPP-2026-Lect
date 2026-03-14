#include <iostream>

void normalCounter() {
    int count = 0; // Створюється заново при кожному виклику!
    count++;
    std::cout << count << " ";
}
// Виклики normalCounter() тричі виведуть: 1 1 1
int main() {
    normalCounter();
    normalCounter();
    normalCounter();
    std::cout << std::endl;
    return 0;
}