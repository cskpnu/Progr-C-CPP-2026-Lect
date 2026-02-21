#include "iostream"
#include "cstring" // Для функції strcpy

int main() {
    char source[] = "C++ is cool";
    char destination[20]; // Виділяємо достатньо місця!

    strcpy(destination, source);
    std::cout << destination; // Виведе: C++ is cool
    return 0;
}