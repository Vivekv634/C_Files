#include <stdio.h>

int main()
{
    int n = 4;
    int arr[10] = {10, 9, 3, 6, 3, 2, 2, 4, 6, 4};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            printf("%d occurs at %d index of array!", n, i);
            break;
        }
    }

    return 0;
}
// 4 occurs at 7 index of array!
