#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../temaune_utils.hpp"

/*
Варіант 6
Розробити програму, за допомогою якої, ввівши відповідний код,
отримуємо для заданого числа його логарифм, експоненту, корінь
квадратний.
*/

int main(void)
{
    double   x = 0.0f;
    unsigned int k = 0;

    print("Лабораторна робота №5");    
    print("Програма для обчислення: логарифма, експоненти, коріня квадратного заданого числа.");
    
    printf("Введіть число: "); scanf("%lf", &x);
    printf("Введіть дію: "); scanf("%u", &k);

    switch (k) {
        case 1: {
            if (x <= 0.0) {
                printf("Помилка: логарифм можна обчислити лише для чисел більших за нуль!\n");
            } else {
                printf("Логарифм числа %lf = %lf\n", x, log(x));
            }
        } break;

        case 2: {
            print("Експонента числа %lf = %lf", x, exp(x));
        } break;
        
        case 3: {
            if (x < 0.0) {
                printf("Неможливо обчислити корінь квадратний з від'ємного числа.\n");
            } else {
                printf("Корінь квадратний числа %lf = %lf\n", x, sqrt(x));
            }
        } break;
        default: UNREACHABLE;
    }
    

    return 0;
}