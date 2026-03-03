#include <iostream>

int sum(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int x = 5;
    int y = 10;
    int total = sum(x, y);
    std::cout << "Сума: " << total << std::endl; // Виведе: Сума: 15
    return 0;
}