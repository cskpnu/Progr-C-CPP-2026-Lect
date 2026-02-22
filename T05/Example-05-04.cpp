#include <iostream>
#include <string>

// 1. Спочатку оголошуємо внутрішню структуру
struct Date {
    int day;
    int month;
    int year;
};

// 2. Тепер оголошуємо зовнішню структуру
struct Student {
    std::string name;
    Date birthDate;   // Поле birthDate має тип Date (наша структура!)
    double gpa;
};

int main() {
    // Варіант 1: Покрокове заповнення
    Student st1;
    st1.name = "Марія";
    st1.gpa = 4.8;

    // Звертаємось до полів вкладеної структури через подвійну крапку
    st1.birthDate.day = 15;
    st1.birthDate.month = 8;
    st1.birthDate.year = 2005;

    // Варіант 2: Одночасна ініціалізація (через вкладені фігурні дужки)
    Student st2{"Олексій", {24, 11, 2004}, 4.1};

    // Виведення даних
    std::cout << "Студент: " << st2.name << std::endl;
    std::cout << "Рік народження: " << st2.birthDate.year << std::endl;

    return 0;
}
