#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

struct Task {
    int id;
    std::string title;
};

void printTasks(const std::deque<Task> &tasks) {
    std::cout << "Поточний список задач (" << tasks.size() << "):\n";
    for (const auto &t: tasks) {
        std::cout << " - [" << t.id << "] " << t.title << "\n";
    }
    std::cout << "---------------------------\n";
}

int main() {
    std::deque<Task> taskList;

    // 1. Додаємо звичайні завдання
    taskList.push_back({1, "Написати звіт"});
    taskList.push_back({2, "Відповісти на пошту"});

    // 2. З'явилося термінове завдання - ставимо в початок
    taskList.push_front({0, "ВИПРАВИТИ БАГ (ТЕРМІНОВО)"});

    printTasks(taskList);

    // 3. Доступ за індексом (як у масиві)
    std::cout << "Друга задача у черзі: " << taskList[1].title << "\n\n";

    // 4. Обробка (видалення) задач з обох боків
    std::cout << "Виконуємо першу задачу...\n";
    taskList.pop_front();

    std::cout << "Скасовуємо останню задачу...\n";
    taskList.pop_back();

    printTasks(taskList);

    // 5. Використання алгоритмів (наприклад, розворот черги)
    std::reverse(taskList.begin(), taskList.end());
    std::cout << "Після реверсу:\n";
    printTasks(taskList);

    return 0;
}
