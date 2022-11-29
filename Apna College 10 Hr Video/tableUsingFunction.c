#include <stdio.h>

void printTable();
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    printTable(num);
    return 0;
}

void printTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }
}
