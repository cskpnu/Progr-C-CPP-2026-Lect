// Example-02-04.cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введіть ціле число: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "Число парне";
    } else {
        cout << "Число непарне";
    }
    return 0;
}