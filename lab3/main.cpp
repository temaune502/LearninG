#include <stdio.h>
#include <iostream>

#define print(format, ...) printf(format "\n", ##__VA_ARGS__);

using namespace std;

// #define FDS_IMPL
// #include "fds.h"
// fds_log(FINFO, "Hello from C++");

// Types           Arithmetic      Logic
// int, double     +=, /, +, -     <, ==


int main()
{
    system("chcp 65001");
    print("Лабораторна робота №3");
    print("Робота з типами int та double\n");
    
    
    print("Завдання 1");
    print("Будь ласка введіть а та б\n");
    
    int a = 0;
    double b = 0.0;
    // int a = 12;
    // double b = 44.3335;
    scanf("%d %lf", &a, &b);
    
    print("Завдання 2");
    
    int intRes = a;
    intRes += b/2;

    double doubleRes = a + b / 2; 

    print("Результат intRes: %d", intRes);
    print("Результат doubleRes: %lf", doubleRes);

    if(intRes == doubleRes)
    {
        print("Результати обчислень співпадають!");
    } 
    else
    {
        print("Результати обчислень не співпадають!");
    }
    print("");
    print("Завдання 3\n");
    print("Неявне перетворення типів  double в int\n");
    
    int implicitA = b;
    print("Значення b до перетворення: %lf", b);
    print("Значення implicitA після перетворення: %d\n", implicitA);
    
    print("Завдання 4\n");
    print("Явне перетворення типів int в double\n");

    double explicitB = (double)a;
    print("Значення a до перетворення: %d", a);
    print("Значення explicitB після перетворення: %lf", explicitB);
    
    print("");
    print("Завдання 5");
    print("Порівняння");
    print("(a < b)  %s:", a  < b ? "true" : "false");
    print("(a == b) %s:", a == b ? "true" : "false");
    
    print("");
    print("Завдання 6"); 
    implicitA != b ? (printf("При кастуванні було втрачено дані!\n")) : (printf("Втрати даних не відбулось!\n"));

    print("");
    print("Завдання 7");
    print("Змінна a (int) займає %zu байт", sizeof(a));
    print("Змінна b (double) займає %zu байт", sizeof(b));
    
    print("");
    print("Завдання 8");

    print("Адреса змінної a: 0x%p", (void*)&a);
    print("Адреса змінної b: 0x%p", (void*)&b);

    return 0;

}