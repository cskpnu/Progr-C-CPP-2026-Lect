#include <stdio.h>

int main() {
    // Відкриваємо файл-джерело для читання
    FILE* source = fopen("report.txt", "r");
    if (source == NULL) {
        printf("Помилка: не знайдено файл-джерело!\n");
        return 1;
    }

    // Відкриваємо файл-призначення для запису
    FILE* destination = fopen("copy.txt", "w");
    if (destination == NULL) {
        printf("Помилка: неможливо створити файл-копію!\n");
        fclose(source); // Обов'язково закриваємо те, що вже встигли відкрити!
        return 1;
    }

    int current_char;

    // Читаємо символи, поки не натрапимо на маркер кінця файлу (EOF)
    while ((current_char = fgetc(source)) != EOF) {
        // Записуємо зчитаний символ у новий файл
        fputc(current_char, destination);
    }

    printf("Файл успішно скопійовано!\n");

    // Закриваємо обидва файли
    fclose(source);
    fclose(destination);

    return 0;
}