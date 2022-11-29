#include <stdio.h>
#include <math.h>

int calcPower();
int main()
{
    int num, power;
    printf("Enter the Number : ");
    scanf("%d", &num);
    printf("Enter the Power : ");
    scanf("%d", &power);
    printf("The value is %d", calcPower(num, power));
    return 0;
}

int calcPower(int base_value, int power)
{
    long int value = pow(base_value, power);
    return value;
}
