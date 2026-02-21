#include "iostream"

// Стара C-функція (наприклад, з якоїсь бібліотеки)
void printOldStyle(const char *text) {
    printf("C-Style print: %s\n", text);
}

int main() {
    std::string message = "Hello World";

    // printOldStyle(message); // ПОМИЛКА! Функція не знає тип string.

    // ПРАВИЛЬНО: Використовуємо "місток" c_str()
    printOldStyle(message.c_str());

     return 0;
}
