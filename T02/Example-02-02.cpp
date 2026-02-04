// Example-02-02.cpp
#include <iostream>

using namespace std;

int main() {
    int x = 10;
    { // Початок вкладеного блоку
        int y = 5;
        cout << x + y; // Працює: 15 (x видно, бо він оголошений вище)
    } // Тут змінна y знищується
    cout << y; // Помилка компіляції! Змінної y більше не існує.
    return 0;
}
