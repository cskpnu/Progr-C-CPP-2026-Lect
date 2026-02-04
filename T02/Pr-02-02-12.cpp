#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x;
    cin >> x;

    double denominator = pow(x, 5) + pow(x, 3) + x + 1;

    if (denominator == 0)
        cout << "Error: Division by zero!";
    else {
        double f = pow(x, 4)/denominator;
        cout << f;
    }
    return 0;
}