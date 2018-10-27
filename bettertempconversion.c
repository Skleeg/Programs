#include <stdio.h>
#include <string.h>

int main(void)
{
    int converterChoice;

    float fTemp, cTemp;

    printf("\n\nTemperature Converter\n");
    printf("Please make a choice \n\n");
    printf("1: Fahrenheit to Celsius\n");
    printf("2: Celsius to Fahrenheit\n");
    scanf("%d", &converterChoice);

    switch (converterChoice)
    {
        case 1:
        printf("Fahrenheit Temp: ");
        if (scanf("%f", &fTemp) != 1)
        {
            printf("Invalid Input");
            return 0;
        }
        cTemp = ((fTemp - 32) * (5.0/9.0));
        printf("\nFahrenheit Temp: %.2f\nCelsius Temp: %.2f\n\n", fTemp, cTemp);
        break;

        case 2:
        printf("Celsius Temp: ");
        if (scanf("%f", &cTemp) != 1)
        {
            printf("Invalid Input");
            return 0;
        }
        fTemp = (((cTemp) * 9.0/5.0) + 32);
        printf("\nCelsius Temp: %.2f\nFahrenheit Temp: %.2f\n\n", cTemp, fTemp);
        break;

        default:
        {
            printf("\nInvalid input\n\n");
        }
    }
}