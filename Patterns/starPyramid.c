#include <stdio.h>

void star_pyramid()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            printf("  ");
        }
        for (int j = 1; j <= (2*i-1); j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
}
int main()
{
    star_pyramid();
    return 0;
}
