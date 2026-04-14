#include <stdio.h>

int main() {
    // 1. Перескеровуємо стандартне введення (клавіатуру) у файл "input.txt"
    // Тепер усі scanf будуть непомітно для себе читати з цього файлу
    if (freopen("input.txt", "r", stdin) == NULL) {
        // Якщо файлу немає, виводимо помилку в stderr (який все ще дивиться в консоль)
        fprintf(stderr, "Помилка: не знайдено файл input.txt!\n");
        return 1;
    }

    // 2. Перескеровуємо стандартне виведення (екран) у файл "output.txt"
    // Тепер усі printf будуть писати в цей файл, а в консолі буде порожньо
    freopen("output.txt", "w", stdout);

    int a, b;

    // Цей scanf прочитає числа з input.txt!
    while (scanf("%d %d", &a, &b) == 2) {
        int sum = a + b;
        // Цей printf запише результат у output.txt!
        printf("Сума чисел %d та %d дорівнює %d\n", a, b, sum);
    }

    // Потоки stdin та stdout закриються автоматично при завершенні програми,
    // але для "чистоти" коду їх можна закрити вручну:
    fclose(stdin);
    fclose(stdout);

    return 0;
}
