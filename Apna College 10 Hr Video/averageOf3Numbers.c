#include <stdio.h>

int main()
{
    int num1, num2, num3;
    float sum, avg;
    printf("Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Enter Number 2 : ");
    scanf("%d", &num2);
    printf("Enter Number 3 : ");
    scanf("%d", &num3);
    sum = num1 + num2 + num3;
    avg = sum / 3.0;
    printf("The average of three numbers is %.2f", avg);
    return 0;
}
