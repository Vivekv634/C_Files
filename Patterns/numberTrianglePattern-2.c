#include <stdio.h>

void number_triangle_pattern_2()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
int main()
{
    number_triangle_pattern_2();
    return 0;
}

// Enter the number of rows : 5
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
