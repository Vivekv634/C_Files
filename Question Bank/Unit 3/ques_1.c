#include <stdio.h>

int main()
{
    int arr[10] = {14, 23, 34, 3, 6, 78, 100, 45, 65, 101};
    int max = arr[0], min = arr[0];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Max value: %d\nMin value:%d\n", max, min);
    return 0;
}
// Max value: 101
// Min value:3
