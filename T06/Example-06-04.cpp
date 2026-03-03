#include <iostream>
// x та y - це ФОРМАЛЬНІ параметри
void doSomething(int x, int y) {
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

int main() {
    int a = 5, b = 10;
    // a та b (або просто числа 5 і 10) - це ФАКТИЧНІ параметри
    doSomething(a, b);
}
