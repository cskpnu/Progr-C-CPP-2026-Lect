#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    double gpa;
};

int main() {
    // Створюємо та ініціалізуємо першого студента
    Student st1{"Іваненко Іван", 19, 4.5};

    // Створюємо другого студента (поки порожнього)
    Student st2;

    // Магія копіювання! Всі поля st1 миттєво копіюються в st2
    st2 = st1;

    // Перевіряємо результат
    std::cout << "Студент 2: " << st2.name << ", Вік: " << st2.age << std::endl;
    // Виведе: Студент 2: Іваненко Іван, Вік: 19

    st2.name = "Петренко Петро"; // Змінюємо ім'я лише для копії

    std::cout << st1.name; // Залишиться "Іваненко Іван"
    std::cout << st2.name; // Буде "Петренко Петро"

    return 0;
}
