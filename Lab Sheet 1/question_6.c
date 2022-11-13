#include <stdio.h>

int main()
{
    int p, t;
    float r;
    printf("Enter the amount of principle : ");
    scanf("%d", &p);
    printf("Enter the time  : ");
    scanf("%d", &t);
    printf("Enter the rate : ");
    scanf("%f", &r);
    float interest = (p*r*t)/1000;
    printf("Simple Interest : %d", interest);
    return 0;
}
