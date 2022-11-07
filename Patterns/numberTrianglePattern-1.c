#include <stdio.h>

void number_triangle_pattern_1()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main()
{
    number_triangle_pattern_1();
    return 0;
}

// Enter the number of rows : 5
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
