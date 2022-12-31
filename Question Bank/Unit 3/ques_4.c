#include <stdio.h>

int main()
{
    int p = 0, n = 0, z = 0, num = 10;
    int arr[10] = {0, 10, -34, -45, 23, 31, 0, 0, 98, -1};
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < 0)
        {
            n++;
        }
        else if (arr[i] > 0)
        {
            p++;
        }
        else
        {
            z++;
        }
    }
    printf("Positive value: %d\nNegative value:%d\nZero value:%d\n", p, n, z);
    return 0;
}
// Positive value: 4
// Negative value:3
// Zero value:3
