#include <stdio.h>
#include <cmath>
#include <iostream>

int main(void)
{

    float a = 1.25f;
    float b = 0.86f;
    float lambda;
    float step = 0.15f;

    for (lambda = 0.15f; lambda <= 1.5; lambda += step)
    {
        float numerator = std::cbrt(std::pow(a, 3) + std::pow(lambda, 3));
        float denominator = std::pow(std::tan(b * lambda), 3) + 1.6f;

        float y = numerator / denominator;

        printf("lambda = %.*f y = %.4f\n", 3, lambda, y);
    }
}
