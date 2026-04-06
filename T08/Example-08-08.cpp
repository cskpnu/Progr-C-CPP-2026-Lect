#include <iostream>
struct DoubleNode {
    int data;           // Корисні дані
    DoubleNode *next;   // Вказівник на НАСТУПНИЙ вузол
    DoubleNode *prev;   // Вказівник на ПОПЕРЕДНІЙ вузол (нове поле!)
};

void push_front(DoubleNode *&head, DoubleNode *&tail, int value) {
    DoubleNode *newNode = new DoubleNode; // 1. Створюємо новий вузол
    newNode->data = value;
    newNode->next = head;                 // 2. Наступним буде поточна Голова
    newNode->prev = nullptr;              // 3. Попереднього немає (він перший)

    if (head != nullptr) {
        head->prev = newNode;             // 4. Якщо список не порожній, стару Голову "чіпляємо" за новий вузол
    } else {
        tail = newNode;                   // 5. Якщо список був порожній, то новий вузол є одночасно і Головою, і Хвостом
    }

    head = newNode;                       // 6. Офіційно призначаємо новий вузол Головою
}
// Прямий прохід (від Голови до Хвоста)
void printForward(DoubleNode* head) {
    DoubleNode* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL\n";
}

// Зворотний прохід (від Хвоста до Голови)
void printBackward(DoubleNode* tail) {
    DoubleNode* current = tail;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->prev; // Рухаємося НАЗАД!
    }
    std::cout << "NULL\n";
}
