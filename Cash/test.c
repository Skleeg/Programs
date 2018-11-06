#include <stdio.h>

int main(void)
{
    int coinAmount = 0, changeInt = 0;
    float changeAmount;

    printf("How much change is owed?\nIn dollars: ");
    if (scanf("%f", &changeAmount) != 1)
    {
        printf("\ninvalid input\n\n");
        return 0;
    }

    changeInt = changeAmount * 100;

    //while quarters are usable
    while (changeInt >= 25)
    {
        changeInt -= 25;
        coinAmount += 1;
    }
    //while dime are usable
    while (changeInt >= 10)
    {
        changeInt -= 10;
        coinAmount += 1;
    }
    //while nickels are usable
    while (changeInt >= 5)
    {
        changeInt -= 5;
        coinAmount += 1;
    }
    //while pennies are usable
    while (changeInt >= 1)
    {
        changeInt -= 1;
        coinAmount += 1;
    }
    printf("\nYour change was: %.2f\n", changeAmount);
    printf("Coins used: %d\n\n", coinAmount);
    return 0;
}