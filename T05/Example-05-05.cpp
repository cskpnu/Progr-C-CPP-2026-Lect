#include "iostream"
#include "string"

struct Student {
    std::string name;
    int groupNumber;
    double gpa;
};

// Створюємо масив на 10 студентів
Student group[10];
int main() {
    group[0].name = "Іваненко Іван";
    group[0].groupNumber = 101;
    group[0].gpa = 4.5;

    group[1].name = "Петренко Анна";
    group[1].gpa = 4.8;
}