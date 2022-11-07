#include <stdio.h>

void binary_triangle()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int sum = i + j;
            if (sum % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main()
{
    binary_triangle();
    return 0;
}

// Enter the number of rows : 5
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
