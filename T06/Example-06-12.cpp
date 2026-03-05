#include <iostream>
#include <string>

struct STUDENT {
    std::string name;
    int groupNumber;
    double gpa;
    int course; // Додамо поле для курсу
};

// ❌ Працює, але неефективно. Відбувається повне копіювання.
void printStudent(STUDENT s) {
    std::cout << s.name << std::endl;
}
// ✅ Ефективно. Дозволяє змінювати оригінал.
void updateCourse(STUDENT& s) {
    s.course++; // Змінюємо курс в оригінальній структурі
}

// 🌟 Золотий стандарт: швидко (немає копії) і безпечно (не можна змінити)
void printStudentInfo(const STUDENT& s) {
    std::cout << s.name << " - Курс: " << s.course << std::endl;
    // s.course = 5; // ПОМИЛКА! Компілятор захистить дані завдяки const
}

