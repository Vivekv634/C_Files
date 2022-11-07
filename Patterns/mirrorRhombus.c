#include <stdio.h>

void mirror_rhombus(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)     // Outer Loop
    {
        for (int j = 0; j <= i; j++)        // 1st Inner Loop for printing spaces!
        {
            printf("  ");
        }
        for (int j = 0; j < n; j++)     // 2nd Inner Loop for printing Star!
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
int main()
{
    mirror_rhombus();
    return 0;
}

// Enter the number of rows : 4
//   * * * *
//     * * * *
//       * * * *
//         * * * *
