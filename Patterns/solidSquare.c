#include <stdio.h>

void solid_square()
{
    int n;
    printf("Enter the length of the square : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
// int main()
// {
//     solid_square();
//     return 0;
// }

// Enter the Number : 5
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
