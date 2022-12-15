#include <stdio.h>

int main()
{
    int num1, num2, num3, smallest;
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);
    printf("Enter the number 3: ");
    scanf("%d", &num3);
    smallest = num1;
    if (smallest > num2)
    {
        smallest = num2;
    }
    if (smallest > num3)
    {
        smallest = num3;
    }
    if (smallest % 2 == 0)
    {
        printf("The smallest number is %d and also even number!", smallest);
    }
    else
    {
        printf("The smallest number is %d but an odd number!", smallest);
    }

    return 0;
}
