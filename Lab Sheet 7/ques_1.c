#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
