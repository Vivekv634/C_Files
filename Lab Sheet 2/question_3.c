#include <stdio.h>

int main()
{
    float principal, rate, time, simple_interest;
    printf("Enter the value of principal : ");
    scanf("%f", principal);
    printf("Enter the value of time : ");
    scanf("%f", time);
    printf("Enter the value of rate : ");
    scanf("%f", rate);
    simple_interest = principal*(1+ rate*time);
    printf("Simple Interest : %f", simple_interest);
    return 0;
}
