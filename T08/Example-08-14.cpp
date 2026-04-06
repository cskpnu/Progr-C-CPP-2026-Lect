#include <iostream>
#include <vector>
#include <algorithm>

void printVectorInfo(const std::vector<int>& v) {
    std::cout << "Елементи: ";
    for (int val : v) {
        std::cout << val << " ";
    }
    std::cout << "\nРозмір (Size): " << v.size()
              << ", Місткість (Capacity): " << v.capacity() << "\n\n";
}

int main() {
    // 1. Створення вектора
    std::vector<int> numbers;

    // ДОБРА ПРАКТИКА: Якщо ми приблизно знаємо, скільки буде елементів,
    // резервуємо пам'ять одразу! Це економить ресурси на реалокаціях.
    numbers.reserve(10);

    std::cout << "Після reserve(10):\n";
    printVectorInfo(numbers); // Size: 0, Capacity: 10

    // 2. Додавання елементів (зараз реалокацій не буде, бо є місткість)
    numbers.push_back(45);
    numbers.push_back(12);
    numbers.push_back(89);
    numbers.push_back(33);
    numbers.push_back(12);

    std::cout << "Після push_back:\n";
    printVectorInfo(numbers);

    // 3. Алгоритм: Сортування
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Після сортування:\n";
    printVectorInfo(numbers);

    // 4. Видалення з середини за допомогою ітератора (повільна операція)
    // Видалимо другий елемент (індекс 1)
    numbers.erase(numbers.begin() + 1);
    std::cout << "Після видалення елемента за індексом 1:\n";
    printVectorInfo(numbers);

    // 5. Очищення пам'яті
    numbers.clear();
    std::cout << "Після clear():\n";
    printVectorInfo(numbers); // Size: 0, Capacity: 10 (пам'ять не повернулася ОС!)

    // Повертаємо зайву пам'ять операційній системі
    numbers.shrink_to_fit();
    std::cout << "Після shrink_to_fit():\n";
    printVectorInfo(numbers); // Size: 0, Capacity: 0

    return 0;
}
