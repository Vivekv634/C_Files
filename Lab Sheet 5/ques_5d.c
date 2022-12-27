#include <stdio.h>

int main()
{
    int num;
    int k, sum;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        k = num;
        for (int j = 1; j <= num - i; j++, k--)
        {
            sum = i;
            printf("%d ", sum);
            sum += k;
        }
        printf("\n");
    }

    return 0;
}
