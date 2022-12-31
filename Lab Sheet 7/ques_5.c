#include <stdio.h>

int main()
{
    int prod;
    int matrix[3][3];
    int mat1[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int mat2[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            prod = mat1[i][j] * mat2[i][j];
            matrix[i][j] = prod;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
