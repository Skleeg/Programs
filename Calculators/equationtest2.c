#include <stdio.h>
#include <string.h>

int main(void)
{
    int choice;

    float addA, addB;
    float subtrA, subtrB;
    float multA, multB;
    float divA, divB;
    float modA, modB;
    float errorVar = 0.0 / 0.0;

    printf("\n-=- Please select an operation from the list -=-.\n");
    printf("-=- If you would like to quit, press Control + C. -=-\n\n");
    printf("1 = Addition\n");
    printf("2 = Subtraction\n");
    printf("3 = Multiplication\n");
    printf("4 = Division\n");
    printf("5 = Modulo\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        printf("\nNumber 1: \n");
        if (scanf("%f", &addA) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        printf("Number 2: \n");
        if (scanf("%f", &addB) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        addA += addB;
        printf("\n -=- Answer: %f -=- \n\n", addA);
        break;

        case 2:
        printf("\nNumber 1: \n");
        if (scanf("%f", &subtrA) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        printf("Number 2: \n");
        if (scanf("%f", &subtrB) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        subtrA -= subtrB;
        printf("\n -=- Answer: %f -=- \n\n", subtrA);
        break;

        case 3:
        printf("\nNumber 1: \n");
        if (scanf("%f", &multA) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        printf("Number 2: \n");
        if (scanf("%f", &multB) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        multA *= multB;
        printf("\n-=- Answer: %f -=-\n\n", multA);
        break;

        case 4:
        printf("\nNumber 1: \n");
        if (scanf("%f", &divA) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        printf("Number 2: \n");
        if (scanf("%f", &divB) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        divA /= divB;
        printf("\n-=- Answer: %f -=-\n\n", divA);
        break;

        case 5:
        printf("\nNumber 1: \n");
        if (scanf("%f", &modA) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        int modintA = modA;
        printf("Number 2: \n");
        if (scanf("%f", &modB) != 1)
        {
            printf("\n-=- Invalid input. -=-\n\n");
            return 0;
        }
        int modintB = modB;
        modintA %= modintB;
        printf("\n-=- Answer: %d -=-\n\n", modintA);
        break;
    }
}