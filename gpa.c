#include <stdio.h>

int main(void)
{
    //All these floats are the values used to ask for and calculate the GPA.
    float mathGrade;
    float englishGrade;
    float historyGrade;
    float scienceGrade;

    float mathCredits;
    float englishCredits;
    float historyCredits;
    float scienceCredits;

    float mathValue;
    float englishValue;
    float historyValue;
    float scienceValue;

    float gradeTotal;
    float creditsTotal;

    float probablyGPA;
    float actualGPA;

    printf("\n-=-=-=-GPA CALCULATOR-=-=-=-\n\n");
    printf("Would you like to use the GPA calculator, or the GPA repeater?\n");
    printf("Press 1 for Calculator, and press 2 for repeater.");
    char calcResponse;
    scanf("%c", &calcResponse);
    if ((calcResponse == '1') || (calcResponse == 'Y'))
    //This segment of code asks if you would like to calculate your GPA,
    //or if you would like to have it repeated to you.
    //If you have it calculated, the following takes place.
    {
        printf("\n-=-Please enter your grades out of 100 points.-=-\n\n");
        printf("Please enter your math grade.\n");
        scanf("%f", &mathGrade);
        printf("Please enter your english grade.\n");
        scanf("%f", &englishGrade);
        printf("Please enter your history grade.\n");
        scanf("%f", &historyGrade);
        printf("Please enter your science grade.\n");
        scanf("%f", &scienceGrade);
        //The above asks for the grades of all of your classes.

        printf("\n-=-Credit values: AP courses are 3.5 credits, ");
        printf("Honors and CP are 2.5 credits.-=-\n\n");
        printf("Please enter your math credits.\n");
        scanf("%f", &mathCredits);
        printf("Please enter your english credits.\n");
        scanf("%f", &englishCredits);
        printf("Please enter your history credits.\n");
        scanf("%f", &historyCredits);
        printf("Please enter your science credits.\n");
        scanf("%f", &scienceCredits);
        //The above asks for the credits you will earn in said classes.

        mathValue = mathGrade * mathCredits;
        englishValue = englishGrade * englishCredits;
        historyValue = historyGrade * historyCredits;
        scienceValue = scienceGrade * scienceCredits;

        gradeTotal = mathValue + englishValue + historyValue + scienceValue;
        creditsTotal = mathCredits + englishCredits + historyCredits + scienceCredits;

        probablyGPA = gradeTotal / creditsTotal;
        probablyGPA = probablyGPA / 25;
        //This segment of code multiplies the given grades by the given credits.
        //Then, it adds the grades * credits together, as well as the total credits.
        //Lastly, it divides the grades * credits by the total credits, and divides the result by 25.

        if (probablyGPA > 4)
        {
            printf("\nliar\n");
        }
        if (probablyGPA < 1)
        {
            printf("\noh no\n");
        }
        printf("\n\aYour GPA is : %.2f\n\n", probablyGPA);
        //This returns the final calculated result to the user.
        }
        if ((calcResponse == '2') || (calcResponse == 'N'))
        //This segment of code is responsible for 
        {
            printf("\nWhat is your GPA? ");
            scanf("%f", &actualGPA);
            printf("\n\aYour GPA is %.2f\n\n", actualGPA);
        }
    return 0;
}