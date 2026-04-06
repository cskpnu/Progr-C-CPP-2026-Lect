#include <iostream>

struct Node {
    int data;
    Node *next;
};

// Створюємо порожній список
Node *head = nullptr;

void push_front(Node *&head, int value) {
    Node *newNode = new Node;       // 1. Створюємо вузол
    newNode->data = value;          // 2. Записуємо дані
    newNode->next = head;           // 3. Зв'язуємо зі старим початком
    head = newNode;                 // 4. Оновлюємо Голову
}

void printList(Node *head) {
    Node *current = head; // Створюємо бігунця, ставимо його на початок

    while (current != nullptr) {          // Поки не дійшли до кінця
        std::cout << current->data << " -> ";
        current = current->next;          // Перестрибуємо на наступний вузол
    }
    std::cout << "NULL\n";
}
void pop_front(Node*& head) {
    if (head == nullptr) return; // Якщо список порожній, нічого не робимо

    Node* temp = head;           // 1. Запам'ятовуємо поточний перший вузол
    head = head->next;           // 2. Зсуваємо початок на другий вузол
    delete temp;                 // 3. Безпечно видаляємо старий перший вузол
}
void clearList(Node*& head) {
    while (head != nullptr) {
        pop_front(head); // Видаляємо по одному з початку, поки список не спорожніє
    }
}
