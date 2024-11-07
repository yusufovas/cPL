#include <stdio.h>

int main(void) {
    int a, b;
    int sum, difference, product, quotient;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) { 
        printf("n/a\n");
        return 0;
    }

    sum = a + b;
    difference = a - b;
    product = a * b;

    if (b != 0) {
        quotient = a / b;
        printf("%d %d %d %d\n", sum, difference, product, quotient);
    } else {
        printf("%d %d %d n/a\n", sum, difference, product);
    }

    return 0;
}
