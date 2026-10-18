#include <stdio.h>
#include <math.h>
#include "../temaune_utils.hpp"

/*
Варіант 14 (Табуляція функції)
Формула: y = (omega^(a/b) - cbrt((omega + b) / a)) / (1.1 + cos^2(a * omega))
Інтервал: omega ∈ [6.8; 20], Крок: 1.6
Константи: a = 3.5, b = 6.4
*/

int main(void)
{
    double a = 3.5;
    double b = 6.4;
    const double start = 6.8;
    const double end = 20.0;
    double step = 1.6;

    print("Лабораторна робота: Використання циклічного оператора for");
    print("Завдання 2");
    print("Варіант 14");
    printf("----------------------------------------\n");
    printf("|    omega    |           y            |\n");
    printf("----------------------------------------\n");

    // Цикл табуляції з урахуванням похибки чисел з плаваючою комою
    for (double omega = start; omega <= end; omega += step) {
        double numerator = pow(omega, a / b) - cbrt((omega + b) / a);
        double denominator = 1.1 + pow(cos(a * omega), 2);
        double y = numerator / denominator;

        printf("| %11.4lf | %22.4lf |\n", omega, y);
    }

    printf("----------------------------------------\n");

    return 0;
}