#include <stdio.h>

void parallelogram()
{
    int n;
    printf("Enter the Number of rows : ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)        // Outer Loop
    {
        for (int j = i - 1; j > 0; j--)         // 1st Inner Loop for printing spaces!                  
        {
            printf("  ");
        }
        for (int j = 0; j < n; j++)         // 2nd Inner Loop for printing Star!
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    parallelogram();
    return 0;
}

// Enter the Number of rows : 5
//         * * * * *
//       * * * * *
//     * * * * *
//   * * * * *
// * * * * *
