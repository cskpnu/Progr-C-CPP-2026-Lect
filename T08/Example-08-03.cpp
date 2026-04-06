#include <cstdlib>
#include <iostream>

int main() {
// Виділяємо пам'ять для 10 цілих чисел.
// sizeof(int) обчислює розмір одного int (зазвичай 4 байти), множимо на 10 = 40 байтів.
// (int*) перед malloc - це приведення типів, бо malloc повертає void*.
    int *c_arr = (int *) malloc(10 * sizeof(int));

    if (c_arr == nullptr) {
// malloc повертає nullptr, якщо пам'ять виділити не вдалося
        std::cout << "Помилка виділення пам'яті!";
    }

// Звільнення пам'яті
    free(c_arr);
    c_arr = nullptr;
}