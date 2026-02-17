#include <iostream>
#include <string>

using namespace std;

int main() {
    string word = "Start";

    // 1. Читання символів
    cout << "Перша літера: " << word[0] << endl;      // 'S'
    cout << "Остання літера: " << word.at(4) << endl; // 't'

    // 2. Зміна символів (Рядки в C++ змінні/mutable!)
    word[2] = 'e'; // Замінюємо 'a' на 'e'
    cout << "Після зміни: " << word << endl; // Виведе "Stert"

    // 3. Демонстрація різниці [] та at()
    string shortStr = "Hi";

    // shortStr[5] = 'A';    // НЕБЕЗПЕЧНО! Може пошкодити пам'ять.
    // shortStr.at(5) = 'A'; // БЕЗПЕЧНО! Викине помилку, яку легше знайти.

    return 0;
}
