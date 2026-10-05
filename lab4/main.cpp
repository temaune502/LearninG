#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>

#define print(format, ...) printf(format "\n", ##__VA_ARGS__);

using namespace std;

int main(void)
{
    system("chcp 65001");
    print("Лабораторна робота №4, варіант 5");
    print("Програма для обчислення значення функції на проміжку [-5; 5]");
    
    double x, y;
    print("Введіть значення аргументу x:");
    scanf("%lf", &x);

    if (x < -5.0 || x > 5.0) {
        print("\nНеможливо обчислити! Значення x виходить за межі інтервалу [-5; 5].");
    } 
    else 
    {
        if (fabs(x) < 2.0) {
            y = 2.0 * x * x + 3.0 * sin(M_PI * x / 4.0);
            print("\nВиконалась перша умова (|x| < 2)!");
        } 
        else if (fabs(x) >= 2.0 && fabs(x) <= 3.0) {
            y = 11.0;
            print("\nВиконалась друга умова (2 <= |x| <= 3)!");
        } 
        else if (x > 3.0 && x < 4.0) {
            y = 17.0 - 2.0 * x;
            print("\nВиконалась третя умова (3 < x < 4)!");
        } 
        else if (x >= 4.0) {
            y = 2.5 * x;
            print("\nВиконалась четверта умова (x >= 4)!");
        } 
        else {
            print("\nДля x в інтервалі [-5; -3) функція не задана в умові.");
            return 0;
        }

        print("Значення функції y = %lf", y);
    }

    return 0;
}