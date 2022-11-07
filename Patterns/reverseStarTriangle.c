#include <stdio.h>

void reverse_star_triangle()
{
    int n;
    printf("Enter the Number of rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
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
//     reverse_star_triangle();
//     return 0;
// }

// Enter the Number : 5
// * * * * *
// * * * *
// * * *
// * *
// *
