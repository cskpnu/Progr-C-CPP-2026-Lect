// Example-02-10.cpp
#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i; // sum = sum + i
    }

    cout << "Sum from 1 to " << n << " is " << sum << endl;
    return 0;
    // Погано (легко помилитися при редагуванні):
    if (x > 0)
        y = 1;

// Добре (безпечно):
    if (x > 0) {
        y = 1;
    }

}
