#include <iostream>
#include <string>

int main() {
    std::string data = "  42 apples";

// stoi пропустить пробіли, зчитає 42, побачить 'a' і зупиниться
    int apples = std::stoi(data);

    std::cout << apples; // Виведе: 42
    return 0;
}