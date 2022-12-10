#include <stdio.h>

int findMax(int num, int arr[], int length)
{
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int num, arr[] = {400, 5, 9, 1, 2, 7, 80}, length = 7;
    printf("The maximum element in array is %d", findMax(num, arr, length));
    return 0;
}
