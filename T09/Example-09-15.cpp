#include <cstdio> // Підключаємо бібліотеку C для введення-виведення

int main() {
    FILE *outFile = fopen("report.txt", "w");
    if (outFile != NULL) {
        int year = 2024;
        double temp = 36.6;
// Записуємо відформатований рядок у файл
        fprintf(outFile, "Рік: %d, Температура: %.1f\n", year, temp);
        fclose(outFile);
    }
}