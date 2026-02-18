#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s = "Hello World 123";

    // Використовуємо посилання (&), щоб змінювати рядок "на льоту"
    for (char &c : s) {
        c = toupper(c);
    }

    std::cout << s;
    // Вивід: HELLO WORLD 123
    // (цифри і пробіли залишились без змін, літери стали великими)

    return 0;
}
