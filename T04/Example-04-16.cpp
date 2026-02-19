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

    const char* dangerousPtr;

    {
        std::string temp = "Temporary";
        dangerousPtr = temp.c_str();
    }
// Тут об'єкт temp знищується. Пам'ять звільняється.

    std::cout << dangerousPtr; // КАТАСТРОФА! Ми читаєм

    return 0;
}
