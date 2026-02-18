#include "iostream"
#include "string"

using namespace std;

int main() {

    string email = "student@gmail.com";

// Шукаємо символ '@'
    size_t pos = email.find('@');

    if (pos != string::npos) {
        cout << "Символ знайдено на позиції: " << pos << endl; // Виведе 7
    } else {
        cout << "Символ не знайдено." << endl;
    }
    return 0;
}