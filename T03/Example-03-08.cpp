#include "iostream"

using namespace std;

int main() {
    const int N = 5;
    int arr[N] = {3, 1, 4, 1, 5};
    int minVal = arr[0];
    int maxVal = arr[0];
    int minIndex = 0; // Часто потрібно знати не тільки значення, а й де воно стоїть

    for (int i = 1; i < N; i++) { // Починаємо з 1-го індексу, бо 0-й вже взяли
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Min: " << minVal << " (index: " << minIndex << ")" << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}