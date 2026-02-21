#include <iostream>
#include <cstring>

int main() {
    char text[] = "Hello";

    // strlen повертає 5, хоча масив займає 6 байтів (через '\0')
    std::cout << "Довжина: " << strlen(text) << std::endl;

    return 0;
}
