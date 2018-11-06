#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[10];

    printf("Please enter a phrase less than ten characters.\n");

    scanf("%s", string);

    if (strcmp(string, "Yeah") == 0)
    {
        printf("\nnice\n\n");
    }
    else
    {
        printf("\nnot nice\n\n");
    }

    printf("You entered: %s\n", string);


    return 0;
}