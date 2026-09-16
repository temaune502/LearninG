#include <stdio.h>
#include <cmath>
#include <iostream>

int main(void)
{

    float a = 1.25f;
    float b = 0.86f;
    float lambda = 0.0f;
    printf("Enter the lambda value: ");
    std::cin >> lambda;

    if (lambda <= 0.15f || lambda >= 1.5f)
    {
        fprintf(stderr, "Value lambda out of range. lambda must be in range [0.15; 1.5]\n");
        return 1;
    }

    float numerator = std::cbrt(std::pow(a, 3) + std::pow(lambda, 3));
    float denominator = std::pow(std::tan(b * lambda), 3) + 1.6f;

    float y = numerator / denominator;

    printf("lambda = %f\n", y);
}
