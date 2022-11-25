#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        printf("%d ", i);
    }

    printf("\n");

    while (num >= 1)
    {
        printf("%d ", num);
        num--;
    }

    printf("\n");
    
    do
    {
        printf("%d ", num);
        num--;
    } while (num >= 1);

    return 0;
}
