#include <stdio.h>

int main()
{
    int n=2, occur=0;
    int arr[10] = {2, 1, 4, 2, 2, 5, 6, 2, 5, 7};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            occur++;
        }
        
    }
    printf("%d occurs %d times in given array!", n, occur);
    return 0;
}
// 2 occurs 4 times in given array!
