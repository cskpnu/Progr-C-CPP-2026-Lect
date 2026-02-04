// Example-02-09.cpp
#include <iostream>

using namespace std;

int main() {
    int x;
    do {
        cout << "Enter a positive number: ";
        cin >> x;
    } while (x <= 0); // Повторювати, поки число недодатне

    cout << "Thank you! You entered: " << x << endl;
    return 0;
}
