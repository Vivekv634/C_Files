#include <stdio.h>

void hollow_square_star_pattern()
{
    int n;
    printf("Enter the length of the side : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main()
{
    hollow_square_star_pattern();
    return 0;
}

// Enter the length of the side : 6
// * * * * * *
// *         *
// *         *
// *         *
// *         *
// * * * * * *
