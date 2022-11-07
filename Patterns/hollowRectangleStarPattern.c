#include <stdio.h>

void hollow_rectangle_star_pattern(){
    int r, c;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == r || j == c)
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
    hollow_rectangle_star_pattern();
    return 0;
}

// Enter the number of rows : 5
// Enter the number of columns : 10
// * * * * * * * * * * 
// *                 * 
// *                 *
// *                 *
// * * * * * * * * * * 
