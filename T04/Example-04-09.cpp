#include <iostream>
#include <string>

int main() {
    int age = 25;
    double pi = 3.14159;

    std::string s1 = std::to_string(age); // "25"
    std::string s2 = std::to_string(pi);  // "3.141590" (зазвичай додає 6 знаків)

    std::cout << "Мені " + s1 + " років." << std::endl;
    std::cout << "pi = " + s2 << std::endl;

    return 0;
}
