// Example-02-06.cpp
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    // Звичайний if/else:
    int max_val;
    if (a > b) {
        max_val = a;
    } else {
        max_val = b;
    }
    cout << "Maximum value (if/else): " << max_val << endl;
    // Використання тернарного оператора:
    max_val = (a > b) ? a : b;
    cout << "Maximum value (ternary): " << max_val << endl;
    return 0;
}
