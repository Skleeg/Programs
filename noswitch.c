#include <stdio.h>

int main(void)
{
    char c;
    printf("Please enter a character\n");
    scanf("%c\n", &c);
    if ((c == 'Y') || (c == 'y'))
    {
        printf("yes\n");
    }
    else if ((c == 'n') || (c == 'N'))
    {
        printf("no\n");
    }
}