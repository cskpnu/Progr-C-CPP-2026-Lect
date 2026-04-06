#include <iostream>

struct Node {
    int data;       // 1. Корисні дані (наприклад, число)
    Node *next;     // 2. Вказівник на НАСТУПНИЙ такий самий вузол
};

int main() {
// 1. Створюємо перший вузол (наприклад, з числом 10)
    Node *firstNode = new Node;
    firstNode->data = 10;
    firstNode->next = nullptr; // Поки що він нікуди не вказує

// 2. Створюємо другий вузол (з числом 20)
    Node *secondNode = new Node;
    secondNode->data = 20;
    secondNode->next = nullptr;

// 3. ЗВ'ЯЗУЄМО ЇХ: записуємо адресу другого вузла у вказівник першого
    firstNode->next = secondNode;

// Тепер, маючи доступ лише до firstNode, ми можемо дістатися до secondNode!
    std::cout << "Дані другого вузла: " << firstNode->next->data << std::endl; // Виведе 20
}