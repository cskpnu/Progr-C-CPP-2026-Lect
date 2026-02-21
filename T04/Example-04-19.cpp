#include "iostream"
#include "cstring" // Для функції strcat

int main() {
    // Виділяємо масив із запасом! (5 літер + 5 літер + 1 нуль = мінімум 11)
    char greeting[20] = "Hello";
    char name[] = "World";

    strcat(greeting, name); // Додає "World" до "Hello"

    std::cout << greeting; // Виведе: HelloWorld
    return 0;
}