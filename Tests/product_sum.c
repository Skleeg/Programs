#include <stdio.h>

int main(void)
{
    int A;
    int B;
    printf("Please input a number.\n");
    if (scanf("%d", &A) != 1)
    {
        printf("Invalid input\n");
        return 0;
    }
    printf("Please input another number.\n");
    if (scanf("%d", &B) != 1)
    {
        printf("Invalid input\n");
        return 0;
    }
    A += B;
    printf("Sum: %d\n", A);
    A -= B;
    A *= B;
    printf("Product: %d\n", A);

    return 0;
}