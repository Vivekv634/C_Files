#include <stdio.h>

void reverse_triangle_pattern_1()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main()
{
    reverse_triangle_pattern_1();
    return 0;
}

// Enter the Number : 5
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
