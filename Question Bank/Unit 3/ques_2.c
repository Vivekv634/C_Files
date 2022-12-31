#include <stdio.h>

int main()
{
    int sum = 0, n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum:%d\nAverage:%d\n", sum, sum / n);
    return 0;
}
// Sum:15
// Average:3
