#include <stdio.h>

int main()
{
    int odd = 0, even = 0, n = 10;
    int arr[10] = {12, 23, 34, 54, 65, 191, 32, 10, 67, 76};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even value:%d\nOdd value:%d\n", even, odd);
    return 0;
}
// Even value:6
// Odd value:4
