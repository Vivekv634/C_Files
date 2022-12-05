#include <stdio.h>

float convertToFahrenheit(float temp)
{
    return (temp * 9 / 5) + 32;
}
int main()
{
    float temp;
    printf("Enter the temperature (in Celcius) : ");
    scanf("%f", &temp);
    printf("Temperature in Fahrenheit : %f", convertToFahrenheit(temp));
    return 0;
}
