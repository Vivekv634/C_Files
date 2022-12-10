#include <stdio.h>

int main()
{
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before Reversing:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    /*
    size of 1 element of array X no of elements = size of array
    no of elements = size of array / size of 1 element of array
    */

    for (int i = 0; i < size / 2; i++)
    {
        int element1 = arr[i];
        int element2 = arr[size - i - 1];
        arr[i] = element2;
        arr[size - i - 1] = element1;
    }
    printf("\nAfter Reversing:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
