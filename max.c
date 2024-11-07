#include <stdio.h>

int findMax(int a, int b) {
    return (a > b )? a : b;
}

int main(void) {

    int a, b;

    printf("Enter two numbers: ");
    if(scanf("%d %d", &a, &b) == 2) {
        int res = findMax(a, b);
        printf("%d\n", res);
        return 0;
    } 
    printf("n/a\n");
    return 1;
}

