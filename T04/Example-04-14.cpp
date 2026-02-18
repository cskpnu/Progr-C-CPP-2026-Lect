#include "iostream"
#include "string"
#include "cctype"

bool isStrongPassword(const std::string &pass);

int main() {
    std::string password;
    std::cout << "Введіть пароль: ";
    std::cin >> password;
    std::cout << (isStrongPassword(password) ? "Пароль сильний" : "Пароль слабкий") << std::endl;

    return 0;
}

bool isStrongPassword(const std::string &pass) {
    bool hasDigit = false;
    bool hasUpper = false;

    for (char c: pass) {
        if (isdigit(c)) hasDigit = true;
        if (isupper(c)) hasUpper = true; // isupper перевіряє, чи літера вже велика
    }

    return hasDigit && hasUpper;
}