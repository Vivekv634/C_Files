#include <stdio.h>

int main()
{
    int num, i = 0;
    printf("Enter the number of times you want to print : ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d. Hello World!\n", i);
        i++;
    }

    return 0;
}
