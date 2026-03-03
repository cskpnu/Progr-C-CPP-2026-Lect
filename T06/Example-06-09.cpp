#include <iostream>

const int COLS = 3; // Кількість стовпців обов'язково має бути фіксованою

// Функція для виводу матриці. Вказуємо [][COLS]
void printMatrix(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    int myTable[2][COLS] = {
            {10, 20, 30},
            {40, 50, 60}
    };

    // Передаємо матрицю і кількість рядків
    printMatrix(myTable, 2);

    return 0;
}
