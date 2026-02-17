#include <iostream>

using namespace std;

int main() {
    const int N = 3;
    int matrix[N][N] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    // Транспонування квадратної матриці відносно головної діагоналі
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) { // j = i + 1 — це елементи над діагоналлю
            // Обмін елементів (swap)
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}