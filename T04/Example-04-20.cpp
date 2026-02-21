#include <string_view>
#include <iostream>

void printMessage(std::string_view text) {
    std::cout << "Повідомлення: " << text << std::endl;
}

int main() {
    std::string s = "Hello C++17";
    printMessage(s); // Працює з std::string printMessage("C-style");
    // Працює з C-рядками
    return 0;
}
