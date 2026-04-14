#include <iostream>
#include <fstream>

int main() {
    std::ifstream myStream("first_file.txt");
    // ... читаємо перший файл ...

    myStream.close(); // Обов'язково закриваємо перший!

    myStream.open("second_file.txt"); // Відкриваємо другий тією ж змінною
    // ... читаємо другий файл ...

    return 0; // Тут myStream знищується, і second_file.txt закриється автоматично
}