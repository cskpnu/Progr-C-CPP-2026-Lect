#include "iostream"

using namespace std;

int main() {
    const int N = 5;
    int arr[N] = {3, 1, 4, 1, 5};
    int key;
    cout << "Введіть число для пошуку: ";
    cin >> key;

    int foundIndex = -1; // -1 означатиме, що елемент не знайдено

    for (int i = 0; i < N; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break; // Знайшли — виходимо з циклу
        }
    }

    if (foundIndex != -1)
        cout << "Елемент знайдено під індексом " << foundIndex << endl;
    else
        cout << "Елемент не знайдено." << endl;
    return 0;
}