#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
