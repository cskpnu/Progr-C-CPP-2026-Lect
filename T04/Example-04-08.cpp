#include <iostream>
#include <string>

using namespace std;

int main() {
    string formula = "a + b + c + d";
    string target = "+";
    int count = 0;

    size_t pos = formula.find(target); // Перший пошук

    while (pos != string::npos) {
        count++;
        // Наступний пошук починаємо ВІДРАЗУ ПІСЛЯ знайденого символу
        pos = formula.find(target, pos + 1);
    }

    cout << "Кількість плюсів: " << count << endl;

    return 0;
}
