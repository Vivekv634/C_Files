#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int arr[n];
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum =sum + arr[i];
    }
    printf("Sum of elements of array: %d\n", sum);
    printf("Average of sum of elements of array: %d\n", sum / n);
    return 0;
}
