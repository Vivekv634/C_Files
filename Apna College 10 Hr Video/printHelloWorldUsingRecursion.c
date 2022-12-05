#include <stdio.h>

void printHello(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("Hello World\n");
    printHello(n - 1);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printHello(num);
    return 0;
}
