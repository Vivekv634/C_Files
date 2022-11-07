#include <stdio.h>

void number_triangle_pattern_3()
{
    int n, num = n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= (2*n+1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n);
        }
        n--;
        printf("\n");
    }
}
int main()
{
    number_triangle_pattern_3();
    return 0;
}

// Enter the number of rows : 5
// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1
