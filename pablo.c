#include <stdio.h>
#include <cs50.h>
#include <string.h>

int x = 'x';
int main(void)
{
    printf("Hello User, please enter your gpa below. \n");
    float gpa = get_float();
    x = gpa;

    if(x > 4)
        printf("Wow! Clearly you have been putting in lots of effort into studying and school work. Great job getting a gpa of %.2f\n", gpa);
    else
        printf("Keep working hard and soon your gpa will be even higher than a %.2f\n", gpa);
    {
    printf("Would you like to hear a fun fact about coding? Press 1 for yes and 0 for no.");
    int yes = get_int ();
    x = yes;
    if(x > 0)
        printf("You selected yes, now enjoy this fun fact! The first programmed computer game was made in 1961, a not so fun fact was that it made no money. :D");
    else
        printf("You selected no, now enjoy the regret of missing out on a fun fact. :D  ");
    }
    {
    printf("Would you like to hear another fun fact about coding? I have 2 more in store! Press 1 for yes and 0 or no.");
    int yes = get_int ();
    x = yes;
    if(x > 0)
        printf("You selected yes, now enjoy this fun fact! The total number of programming languages in the world is........ 698!");
    else
        printf("You selected no. You know they say you learn something new every day, this could be your chace. Lucky for you there is still one more fun fact left. ");
    }
    {
        printf("Would you like to hear the final fun fact? Like always press 1 for yes and 0 for no!");
        int yes = get_int ();
        x = yes;
        if(x > 0)
            printf("You selected yes, prepare yourself for the... FINAL FUN FACT!!!       This program took me over 3 hours to create, I hope you enjoyed it!");
        else
            printf("Oh well, have a nice day I guess.");
    }

}