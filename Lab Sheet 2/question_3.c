#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, CI, SI;
    printf("Enter principal value : ");
    scanf("%f", &principal);
    printf("Enter rate value : ");
    scanf("%f", &rate);
    printf("Enter time value : ");
    scanf("%f", &time);
    SI = (principal * rate * time) / 100;
    CI = principal * pow((1 + rate / 100), time);
    printf("Simple Interest : %.3f\n", SI);
    printf("Compound Interest : %.3f", CI);
    return 0;
}

