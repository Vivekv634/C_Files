#include <stdio.h>

void reverse_triangle_pattern_2()
{
    int n;
    printf("Enter the Number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
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
    reverse_triangle_pattern_2();
    return 0;
}

// Enter the Number : 5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
