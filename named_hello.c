#include <stdio.h>

int main(void)
{
    int name;

    printf("Enter your name: ");
    scanf("%d", &name);

    printf("Hello, %d!", name);

    return 0;
}