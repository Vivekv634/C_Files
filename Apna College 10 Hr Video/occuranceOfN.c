#include <stdio.h>

int findOccurance(int arr[], int length, int num)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 4, 4, 5, 6, 7, 4, 4, 4};
    int num = 4;
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("%d occurs %d times in array!", num, findOccurance(arr, length, num));
    return 0;
}
