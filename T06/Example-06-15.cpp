// НЕБЕЗПЕЧНИЙ КОД! Базового випадку немає.
int badFactorial(int n) {
    // Функція буде викликати саму себе нескінченно
    return n * badFactorial(n - 1);
}

int main() {
    badFactorial(3);
    return 0;
}
