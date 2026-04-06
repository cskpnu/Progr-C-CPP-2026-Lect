#include <array>
#include <iostream>

int main() {
    std::array<int, 3> arr = {10, 20, 30};

// Обхід за допомогою ітераторів
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    // ще один приклад
    for (const auto &num: arr) {
        std::cout << num << " ";
    }
}