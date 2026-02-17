#include "iostream"
using namespace std;
int main(){
    const int N = 5;
    int arr[N] = {1, 2, 3, 4, 5};

    for (int i = 0; i < N / 2; i++) {
        // Обмін місцями arr[i] та arr[N - 1 - i]
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;

        // Або використовуючи вбудовану функцію std::swap (рекомендовано):
        // swap(arr[i], arr[N - 1 - i]);
    }
    return 0;
}