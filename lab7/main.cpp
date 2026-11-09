#include <stdio.h>
#include <math.h>
#include "../temaune_utils.hpp"

/*
Лабораторна робота: Використання циклів while та do while
Варіант 14
Формула: b = (a + ln^2(a + c * exp(a / 2))) / (|a - c| + 0.15)
Інтервал: c ∈ [1.35; 4.35], Кількість значень: 20
Константи: a = 3.85
*/

int main(void)
{
    double a = 3.85;
    double c_begin = 1.35;
    double c_end = 4.35;
    int total_values = 20;
    
    double h = (c_end - c_begin) / (total_values - 1);

    double c = c_begin;
    double b;
    int number = 1;

    double max_b;
    double c_max;
    int max_number = 1;

    print("Лабораторна робота: Використання циклів while та do while");
    print("Варіант 14");
    print("Діапазон c є [%.2lf; %.2lf], кількість значень: %d", c_begin, c_end, total_values);
    print("--------------------------------------------------------");
    print("|  number  |    c    |             b             |");
    print("--------------------------------------------------------");

    // Цикл з передумовою (while)
    while (number <= total_values)
    {

        b = (a + pow(log(a + c * exp(a / 2.0)), 2)) /
            (fabs(a - c) + 0.15);


        print("|   %2d     |  %.2lf  |    %15.6lf     |", number, c, b);

        if (number == 1 || b > max_b)
        {
            max_b = b;
            c_max = c;
            max_number = number;
        }

        c += h;
        number++;
    }

    print("--------------------------------------------------------\n");
    print("\nРезультати пошуку максимального значення:");
    print("Номер точки: %d", max_number);
    print("Значення аргументу c: %.4lf", c_max);
    print("Максимальне значення функції (max b): %.6lf", max_b);

    return 0;
}