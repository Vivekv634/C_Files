#include <stdio.h>
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Array:\n");
    printArray(arr, 5);
    return 0;
}
// Array:
// 1 2 3 4 5
