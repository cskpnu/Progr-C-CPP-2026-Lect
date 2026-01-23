// Ex-01-12.c
int sum = 100;
int count = 8;
double average;

// Помилка: результат буде 12.0 (втрата точності через ціле ділення)
average = sum / count;

// Правильно: sum перетворюється на double перед діленням -> результат 12.5
average = (double)sum / count;
