#include "iostream"
#include "string"

using namespace std;

int main() {
    string fullName;
    cout << "Введіть прізвище та ім'я: ";
    getline(cin, fullName); // Зчитає весь рядок

    cout << "Ви ввели: " << fullName << endl;
    return 0;
}