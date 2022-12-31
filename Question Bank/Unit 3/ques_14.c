#include <stdio.h>

void decimalToBinary(int n)
{
    int binary[32], i = 0;
    while (n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Binary number of %d is:", n);
    decimalToBinary(n);
    return 0;
}
