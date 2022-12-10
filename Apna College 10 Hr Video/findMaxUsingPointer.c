#include <stdio.h>

int findMax(int a, int b, int *max){
    if (a>b)
    {
        *max = a;
    } else
    {
        *max = b;
    }
    
    
}
int main()
{
    int a, b, max;
    printf("Enter the Number 1 : ");
    scanf("%d", &a);
    printf("Enter the Number 2 : ");
    scanf("%d", &b);
    findMax(a, b, &max);
    printf("Maximum value is %d", max);
    return 0;
}
