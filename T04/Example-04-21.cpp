#include "iostream"
#include "cstring"

int main() {
    char dest[10];
    char src[] = "Дуже довгий текст для масиву";
// Копіюємо максимум 9 символів, щоб залишити 1 байт для '\0'
    strncpy(dest, src, sizeof(dest) - 1);
    dest[sizeof(dest) - 1] = '\0'; // Завжди вручну ставимо нуль-термінатор для безпеки
    return 0;
}