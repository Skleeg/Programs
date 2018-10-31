#include <stdio.h>
#include <string.h>
//Header files to have the string related functions work properly.

int main(void)
{
    //All these variables are the values used to ask for and calculate the GPA.
    float mathGrade, englishGrade, historyGrade, scienceGrade;

    float mathCredits, englishCredits, historyCredits, scienceCredits;

    float mathValue, englishValue, historyValue, scienceValue;

    float gradeTotal, creditsTotal;

    float probablyGPA, actualGPA;

    float additionalGrade, additionalCredits, additionalValue;

    char calcResponse[10], classResponse[10];

    printf("\n-=-=-=-GPA CALCULATOR-=-=-=-\n\n");
    printf("Would you like to use the GPA calculator, or the GPA repeater?\n");
    printf("Type 'Yes' for the calculator, and type 'No' for your gpa ");
    printf("to be repeated back to you.\n");
    scanf("%s", calcResponse);
    if ((strcmp(calcResponse, "Yes") == 0) || (strcmp(calcResponse, "yes") == 0))
    /* This segment of code asks if you would like to calculate your GPA,
    or if you would like to have it repeated to you.
    If you have it calculated, the following takes place. */
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
        printf("\nAre you taking any additonal classes?\n");
        scanf("%s", classResponse);

        float gradeAddition = 0;
        float creditAddition = 0;

        if (strcmp(classResponse, "Yes") == 0)
        {
            printf("Please enter the grade of this class.\n");
            scanf("%f", &additionalGrade);
            gradeAddition = additionalGrade + gradeAddition;
            printf("Please enter the credits of this class.\n");
            scanf("%f", &additionalCredits);
            creditAddition = additionalCredits + creditAddition;
            printf("Are you taking any additional classes?\n");
            scanf("%s", classResponse);
        }
        printf("\n%.2f\n", additionalGrade);
        printf("\n%.2f\n\n", additionalCredits);
        mathValue = mathGrade * mathCredits;
        englishValue = englishGrade * englishCredits;
        historyValue = historyGrade * historyCredits;
        scienceValue = scienceGrade * scienceCredits;
        {
            if (additionalGrade != 0 )
            additionalValue = additionalGrade * additionalCredits;
        }

        if (additionalGrade + additionalCredits == 0)
        {
            gradeTotal = mathValue + englishValue + historyValue + scienceValue + additionalValue;
            creditsTotal = mathCredits + englishCredits + historyCredits + scienceCredits + additionalCredits;
        }
        else 
        {
            gradeTotal = mathValue + englishValue + historyValue + scienceValue;
            creditsTotal = mathCredits + englishCredits + historyCredits + scienceCredits;
        }

        probablyGPA = gradeTotal / creditsTotal;
        probablyGPA = probablyGPA / 25;
        /* This segment of code multiplies the given grades by the given credits.
        Then, it adds the grades * credits together, as well as the total credits.
        Lastly, it divides the grades * credits by the total credits, and divides the result by 25. */

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
        else if ((strcmp(calcResponse, "No") == 0) || (strcmp(calcResponse, "no") == 0))
        //This segment of code is responsible for 
        {
            printf("\nWhat is your GPA? ");
            scanf("%f", &actualGPA);
            printf("\n\aYour GPA is %.2f\n\n", actualGPA);
        }
        else
        {
            printf("\nPlease enter a valid response.\n\n");
        }
    return 0;
}