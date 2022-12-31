#include <stdio.h>

int main()
{
    // int r, c;
    // int matrix[r][c];
    // printf("Enter the no. of rows & columns: ");
    // scanf("%d %d", &r, &c);
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("Enter element (%d, %d): ", i + 1, j + 1);
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    int sum, matrixsum[3][2];
    int matrix1[3][2] = {{1, 2}, {1, 2}, {1, 2}};
    int matrix2[3][2] = {{1, 2}, {1, 2}, {1, 2}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = matrix1[i][j] + matrix2[i][j];
            matrixsum[i][j] = sum;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrixsum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
