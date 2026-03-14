#include <iostream>

// 1. Глобальна змінна (видно всім, навіть іншим файлам)
int globalCount = 100;

// 2. Частково глобальна змінна (видно всім функціям ТІЛЬКИ у цьому файлі)
static int fileCount = 50;

void doSomething() {
    // 3. Локальна змінна (видно тільки всередині doSomething)
    int localCount = 10;

    // Функція бачить усі три змінні
    std::cout << globalCount + fileCount + localCount;
}
