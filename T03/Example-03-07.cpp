#include "iostream"

using namespace std;

int main() {
    const int N = 5;
    int arr[N] = {1, 2, 3, 4, 5};
    long long product = 1;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += arr[i];      // Додаємо поточний елемент до суми
        product *= arr[i];  // Домножуємо на поточний елемент
    }
    return 0;
}