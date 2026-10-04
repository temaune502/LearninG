#include <iostream>
#include <stdio.h>
#include <iostream>
#include <cmath>

#define print(format, ...) printf(format "\n", ##__VA_ARGS__);

using namespace std;
int main(void)
{
    system("chcp 65001");
    print("Лабораторна робота №4, варіант 6");
    print("Програма для обчислення значення функції на проміжку [-4; 4]");
    
    double x,y;
    print("Введіть значення аргументу x:");
    scanf("%lf", &x);

    if (x < -4.0 || x > 4.0) {print("\nНеможливо обчислити! Значення x виходить за межі інтервалу [-4; 4].");}
    else 
    {
        if (x >= 1.0 && x <= 2.718282) {
            y = log(x);
            print("\nВиконалась перша умова (1 <= x <= 2.718282)!");
        } 
        else if (fabs(x) <= 1.0) {
            y = fabs(x * x - 1.0); // |x^2 - 1|
            print("\nВиконалась друга умова (|x| <= 1)!");
        } 
        else if (x > -2.0 && x <= -1.0) {
            y = 1.0 - x; // 1 - x
            print("\nВиконалась третя умова (-2 < x <= -1)!");
        } 
        else {
            y = 1.0; 
            print("\nВиконалась четверта умова (в інших випадках)!");
        }

        print("Значення функції y = %lf", y);
    }

    return 0;
}