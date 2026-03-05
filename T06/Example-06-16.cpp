// 1. ІТЕРАТИВНИЙ ПІДХІД (Цикли)
int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i; // Постійно оновлюємо одну й ту саму змінну
    }
    return result;
}

// 2. РЕКУРСИВНИЙ ПІДХІД
int factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1); // Створюємо нові виклики в пам'яті
}
