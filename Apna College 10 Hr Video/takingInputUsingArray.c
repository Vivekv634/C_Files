#include <stdio.h>

int main()
{
    int arr[5];

    // input
    int *ptr = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Value at index %d = ", i);
        // scanf("%d", (ptr+i));
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        // printf("Value %d = %d\n", i, *(ptr+i));
        printf("Value %d = %d\n", i, arr[i]);
    }
    
    
    return 0;
}
