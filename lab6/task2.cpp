#include <stdio.h>
#include <math.h>
#include "../temaune_utils.hpp"

/*
Варіант 14 (Обчислення суми та добутку ряду)
Сума: sum = Σ [ (1 + cos(2*k)) / 2^k ] від k=1 до n
Добуток: product = Π [ (1 + cos(2*k)) / 2^k ] від k=1 до n
*/

int main(void)
{
    int n = 0;
    double sum = 0.0;
    double product = 1.0;

    print("Лабораторна робота: Використання циклічного оператора for");
    print("Завдання 2");
    print("Варіант 14");

    print("Введіть кількість елементів (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        print("Помилка: введіть ціле додатне число!\n");
        return 1;
    }

    // Цикл для обчислення суми та добутку від 1 до n
    for (int k = 1; k <= n; k++) {
        double term = (1.0 + cos(2.0 * k)) / pow(2.0, k);
        sum += term;
        product *= term;
    }

    print("----------------------------------------\n");
    print("Результати для n = %d:\n", n);
    print("Сума = %le\n", sum);
    print("Добуток = %le\n", product);
    print("----------------------------------------\n");

    return 0;
}