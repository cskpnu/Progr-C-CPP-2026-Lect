#include "iostream"
#include "string"

int main() {
    std::string text = "User123: Password!";
    int digitCount = 0;

    for (char c: text) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    std::cout << "Кількість цифр у рядку: " << digitCount << std::endl;
// digitCount буде дорівнювати 3 (це '1', '2', '3')
    return 0;
}