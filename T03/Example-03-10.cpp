#include "iostream"

using namespace std;

int main() {
    const int N = 3, M = 4;
    int matrix[N][M] = {
            {1, 2,  3,  4},
            {5, 6,  7,  8},
            {9, 10, 11, 12}
    };
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < M; j++) cout << matrix[i][j] << " ";
        } else {
            for (int j = M - 1; j >= 0; j--) cout << matrix[i][j] << " ";
        }
    }

    return 0;
}