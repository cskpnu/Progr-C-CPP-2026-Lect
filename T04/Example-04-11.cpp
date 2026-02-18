#include "iostream"
#include "string"

int main() {
    std::string s = "Hello";

    for (int i = 0; i < s.length(); ++i) {
        std::cout << "Індекс " << i << ": " << s[i] << std::endl;
    }
    return 0;
}