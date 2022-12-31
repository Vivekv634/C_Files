#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        sum += i;
    }
    printf("Sum of first 50 numbers is : %d\n", sum);
    return 0;
}
// Sum of first 50 numbers is : 1275
