#include <cstdio> // Підключаємо бібліотеку C для введення-виведення

int main() {
    FILE *inFile = fopen("report.txt", "r");
    if (inFile != NULL) {
        int readYear;
        char word[20]; // Масив для зберігання слова

// Читаємо слово (до пробілу) і одне ціле число
        fscanf(inFile, "%19s %d", word, &readYear);
        printf("Зчитано: %s %d\n", word, readYear);
        fclose(inFile);
    }
}