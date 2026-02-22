#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    double gpa;
};

int main() {
    // 1. Створюємо змінну (поки що вона порожня/містить "сміття")
    Student st1;

    // 2. Записуємо дані в поля структури за допомогою крапки
    st1.name = "Олександр";
    st1.age = 19;
    st1.gpa = 4.2;

    // 3. Читаємо дані з полів (наприклад, для виводу на екран)
    std::cout << "Студент: " << st1.name << std::endl;
    std::cout << "Вік: " << st1.age << std::endl;
    std::cout << "Середній бал: " << st1.gpa << std::endl;

    // 4. Зміна існуючого значення
    // Олександр успішно здав сесію, підвищимо йому бал!
    st1.gpa += 0.3;

    std::cout << "Новий середній бал: " << st1.gpa << std::endl;

    return 0;
}
