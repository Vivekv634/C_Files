#include <stdio.h>

void reverse_triangle_pattern_3()
{
    int n;
    printf("Enter the Number of rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main()
{
    reverse_triangle_pattern_3();
    return 0;
}

// Enter the Number of rows : 5
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1
