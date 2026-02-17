#include "iostream"
#include "string"
#include <windows.h>

using namespace std;

int main() {
// Встановлюємо UTF-8 для вводу та виводу в консолі Windows
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string fullName;
    cout << "Введіть прізвище та ім'я: ";;
    cin >> fullName; // Користувач вводить: Шевченко Тарас

    cout << "Ви ввели: " << fullName << " Довжина:" << fullName.length() << endl;
    return 0;
}