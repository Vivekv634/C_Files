#include <stdio.h>

int main()
{
    int mat1[3][3] = {{1, 2, 3}, {2, 3, 4}, {1, 4, 5}};
    int mat2[3][3] = {{2, 3, 1}, {2, 3, 2}, {4, 1, 5}};
    int finalmat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            finalmat[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
    printf("Final Matrix after multiplication:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", finalmat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// Final Matrix after multiplication:
// 2 6 3
// 4 9 8
// 4 4 25
