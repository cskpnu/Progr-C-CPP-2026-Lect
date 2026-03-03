#include <iostream>
#include <string>

// 1. Тільки читання: константне посилання (швидко і безпечно, без копіювання)
void printMessage(const std::string &msg) {
    std::cout << "Повідомлення: " << msg << std::endl;
    // msg += "!"; // ПОМИЛКА! Компілятор не дозволить змінити константу
}

// 2. Зміна оригіналу: звичайне посилання
void addExclamation(std::string &msg) {
    msg += "!!!"; // Оригінальний рядок у main() буде змінено
}

int main() {
    std::string myText = "С++ це круто";

    printMessage(myText);

    addExclamation(myText); // Змінюємо текст
    printMessage(myText);   // Виведе: С++ це круто!!!

    return 0;
}