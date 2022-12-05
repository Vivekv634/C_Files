#include <stdio.h>

int main()
{
    int n = 10;
    int *ptr = &n;
    int **pptr = &ptr;
    printf("Adress of the pointer 1 is %d\n", (ptr));
    printf("Value at address of pointer 2 is %d\n", (*pptr));
    printf("Value at address of pointer 2 of pointer 1 is %d\n", (**pptr));
    return 0;
}
