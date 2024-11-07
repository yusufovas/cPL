#include <stdio.h>
#include <math.h>

float important_function(float x)
{

    float term1 = 7e-3 * pow(x, 4);
    float term2 = ((22.8 * pow(x, 1.0 / 3) - 1e3) * x + 3) / (pow(x, 2) / 2);
    float term3 = x * pow(10 + x, 2.0 / x);
    float result = term1 + term2 - term3 - 1.01;

    return result;
}

int main(void)
{

    float input;

    printf("Enter number: ");

    if (scanf("%f", &input) != 1)
    {
        printf("n/a\n");
        return 0;
    }

    printf("%.1f\n", important_function(input));
    return 0;
}