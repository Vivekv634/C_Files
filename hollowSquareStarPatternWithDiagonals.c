#include <stdio.h>


void hollow_square_star_pattern_with_diagonals(){
    int n;
    printf("Enter the length of the side : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n || i == j || (i+j)-1 == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    
}
int main()
{
    hollow_square_star_pattern_with_diagonals();
    return 0;
}
