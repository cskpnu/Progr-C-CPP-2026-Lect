// Example-00-01.c
#include <stdio.h>
#include <math.h> // Підключення математичної бібліотеки

int main() {
    double a, b, c, p, s;

    printf("Enter sides a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c); // Введення даних

    // Перевірка нерівності трикутника
    if (a + b > c && a + c > b && b + c > a) {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Area = %.2f\n", s);
    } else {
        printf("Triangle does not exist!\n");
    }

    return 0;
}
