#include "iostream"

using namespace std;

int main() {
    const int N = 10;
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int countEven = 0; // Лічильник

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) { // Перевірка на парність
            countEven++;
        }
    }
    cout << "Кількість парних чисел: " << countEven << endl;


    return 0;
}