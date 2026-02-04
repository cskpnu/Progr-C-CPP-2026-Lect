#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double X, Y, Z;
    cin >> X >> Y >> Z;

    if (fabs(X) > Y*Y + Z*Z)
    cout << X << " ";

    if (fabs(Y) > X*X + Z*Z)
    cout << Y << " ";

    if (fabs(Z) > X*X + Y*Y)
    cout << Z << " ";

    return 0;
}
