#include <stdio.h>

int main()
{
    int num, i = 1;
    printf("Enter the Number : ");
    scanf("%d", &num);
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= num);

    return 0;
}
