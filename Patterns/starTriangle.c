#include <stdio.h>

void star_triangle()
{
    int n;
    printf("Enter the Number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
// int main()
// {
//     star_triangle();
//     return 0;
// }

// Enter the Number : 5
// *
// * *
// * * *
// * * * *
// * * * * *
