#include <stdio.h>

void natural_number_triangle()
{
    int n, num = 1;
    printf("Enter the Number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
int main()
{
    natural_number_triangle();
    return 0;
}

// Enter the Number of rows : 5
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
