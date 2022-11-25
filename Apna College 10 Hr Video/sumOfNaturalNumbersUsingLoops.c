#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &num);

    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= num);

    // for (i = 1; i <= num; i++)
    // {
    //     sum += i;
    // }

    // while (i <= num)
    // {
    //     sum += i;
    //     i++;
    // }

    printf("Sum of %d natural numbers is %d", num, sum);
    return 0;
}
