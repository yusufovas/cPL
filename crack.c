#include <stdio.h>

int main()
{
    float x, y;
    float radius = 1.0;

    printf("Enter two numbers: ");

    if (scanf("%f %f", &x, &y) != 2)
    {
        printf("n/a\n");
        return 0;
    }

    if ((x * x + y * y) <= (radius * radius))
    {
        printf("GOTCHA\n");
    }
    else
    {
        printf("MISS\n");
    }

    return 0;
}