#include <stdio.h>

int calculateSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + calculateSum(n - 1);
}
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    printf("Sum is : %d", calculateSum(num));
    return 0;
}
