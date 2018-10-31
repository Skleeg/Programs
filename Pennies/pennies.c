#include <stdio.h>
#include <math.h>

int main(void)
{
    int days;
    do
    {
    printf("How many days are there in a month?\n");
    scanf("%d", &days);
    }
    while ((days != 31) && (days != 30) && (days != 28));
    printf("%d\n", days);
}