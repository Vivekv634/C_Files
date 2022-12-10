#include <stdio.h>

int countOddUsingPointer(int arr[], int n, int *count)
{
    int *ptr = &arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            *count += 1;
        }
    }
    return 0;
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int arr[6] = {1, 3, 5, 7, 9, 11}, count = 0;
    countOddUsingPointer(arr, 6, &count);
    printf("The number of ODD numbers using pointer method is : %d\n", count);
    printf("The number of ODD numbers without using pointer method is : %d\n", countOdd(arr, 6));
    return 0;
}
