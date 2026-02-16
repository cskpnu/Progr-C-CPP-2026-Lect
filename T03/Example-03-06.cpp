#include <iostream>
#include <cstdlib> // Для rand() і srand()
#include <ctime>   // Для time()

using namespace std;

int main() {
    const int N = 10;
    int arr[N];

    // Ініціалізація генератора випадкових чисел
    srand(time(0));

    // Заповнення та виведення в одному циклі
    cout << "Масив: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100; // Випадкові числа від 0 до 99
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
