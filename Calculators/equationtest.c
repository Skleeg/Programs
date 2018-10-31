#include <stdio.h>
#include <string.h>

int main(void)
{
    float firstNumber, secondNumber;
    char functionOperator;

    printf("Please insert a number.\n");
    scanf("%f", &firstNumber);
    printf("Please insert an additional number.\n");
    scanf("%f", &secondNumber);

    printf("\nWhat operation would you like to do?\n");
    printf("Multi. = *, Div. = /, Add = +, Subtr. = -, Mod = m\n");
    scanf(" %c", &functionOperator);
    if (strcmp(&functionOperator, "*") == 0)
    {
        float product = firstNumber * secondNumber;
        printf("Your number is now: %f\n", product);
    }
    if (strcmp(&functionOperator, "/") == 0)
    {
        firstNumber /= secondNumber;
        printf("Your number is now: %f\n", firstNumber);
    }
    if (strcmp(&functionOperator, "+") == 0)
    {
        firstNumber += secondNumber;
        printf("Your number is now: %f\n", firstNumber);
    }
    if (strcmp(&functionOperator, "-") == 0)
    {
        firstNumber -= secondNumber;
        printf("Your number is now: %f\n", firstNumber);
    }
    if (strcmp(&functionOperator, "m") == 0)
    {
        int firstInt = firstNumber;
        int secondInt = secondNumber;
        firstInt %= secondInt;
        printf("Your number is now: %d\n", firstInt);
    }
    return 0;
}