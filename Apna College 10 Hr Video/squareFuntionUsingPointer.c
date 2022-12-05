#include <stdio.h>

void square(int n)
{
    n *= n;
    printf("Square is %d\n", n);
}

void _square(int *n)
{
    *n *= *n;
    printf("Square is %d\n", *n);
}
int main()
{
    int num = 5;
    square(num);
    printf("Number is %d\n", num);
    _square(&num);
    printf("Number is %d\n", num);
    return 0;
}
