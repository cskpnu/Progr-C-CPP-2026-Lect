// Example-02-01.cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    double x1, x2;
    if (delta < 0) {
        cout << "No real roots";
    } else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        cout << "One root found: " << x1;
    } else if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Two roots found " << x1 << " and " << x2;
    }
    return 0;
}



