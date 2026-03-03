#include <iostream>

// Приймаємо класичний С-рядок. Розмір не потрібен!
void printCString(const char str[]) {
    int i = 0;
    // Цикл працює, поки не зустрінемо нуль-термінатор '\0'
    while (str[i] != '\0') {
        std::cout << str[i];
        i++;
    }
    std::cout << std::endl;
}

int main() {
    char greeting[] = "Hello";
    printCString(greeting);
    return 0;
}