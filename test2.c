#include <stdio.h>

int main(void)
{
    int coinAmount = 0, changeInt = 0;
    float changeAmount = 0.0;
    int quarterAmount = 0, dimeAmount = 0, nickelAmount = 0, pennyAmount = 0;

    do
    {
    printf("\nHow much change is owed?\nIn dollars: ");
    scanf("%f", &changeAmount);
    }
    while (changeAmount < 0);
    changeInt = changeAmount * 100 + 0.5;
    printf("\n\n%d\n%f\n\n", changeInt, changeAmount);

    //while quarters are usable
    while (changeInt >= 25)
    {
        changeInt -= 25;
        coinAmount += 1;
        quarterAmount += 1;
    }
    //while dime are usable
    while ((changeInt >= 10) && (changeInt < 25))
    {
        changeInt -= 10;
        coinAmount += 1;
        dimeAmount += 1;
    }
    //while nickels are usable
    while ((changeInt >= 5) && (changeInt < 10))
    {
        changeInt -= 5;
        coinAmount += 1;
        nickelAmount += 1;
    }
    //while pennies are usable
    while ((changeInt >= 1) && (changeInt < 5))
    {
        changeInt -= 1;
        coinAmount += 1;
        pennyAmount += 1;
    }
    printf("Coins used: %d\n\n", coinAmount);
    printf("Breakdown: \nQuarters: %d\nDimes: %d\nNickels: %d\nPennies: %d\n", quarterAmount, dimeAmount, nickelAmount, pennyAmount);
    return 0;
}