#include <stdio.h>

int main()
{
    float principle, time, rate, interest;
    printf("Enter the value of principle : ");
    scanf("%f", &principle);
    printf("Enter the value of time : ");
    scanf("%f", &time);
    printf("Enter the value of rate : ");
    scanf("%f", &rate);
    interest = (principle * time * rate) / 100;
    printf("Interest Rate : %.3f", interest);
    return 0;
}
