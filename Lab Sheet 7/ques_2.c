#include <stdio.h>

int main()
{
    int n;
    float largest, smallest;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%f", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (largest < arr[i + 1])
        {
            largest = arr[i + 1];
        }
        if (smallest > arr[i + 1])
        {
            smallest = arr[i + 1];
        }
    }
    printf("Largest No.: %.2f\n", largest);
    printf("Smallest No.: %.2f\n", smallest);
    return 0;
}
