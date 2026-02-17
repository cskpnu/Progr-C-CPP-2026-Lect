#include <iostream>

using namespace std;

int main() {
    const int N = 5;
    int matrix[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
    return 0;
}