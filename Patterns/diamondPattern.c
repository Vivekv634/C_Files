#include <stdio.h>

void diamond_pattern()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    diamond_pattern();
    return 0;
}

// Enter the Number : 4
//    *
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *
