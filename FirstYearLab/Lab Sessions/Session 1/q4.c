//Convert temperature from Fahrenheit to Centigrade.
#include <stdio.h>
int main()
{
    float fah;
    printf("\nEnter the temperature (in Fahrenheit): ");
    scanf("%f", &fah);
    printf("\nThe temperature in Centigrade is: %.2f", ((fah-32)*5)/9);
    return 0;
}