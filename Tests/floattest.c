#include <stdio.h>

int main(void)
{
    float userInput;
    printf("Please enter a number.\n");
    scanf("%f", &userInput);
    printf("%.2f\n", userInput);
}