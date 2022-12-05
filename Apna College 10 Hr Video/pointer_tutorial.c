#include <stdio.h>

int main()
{
    int age = 10;
    int *pointer = &age;        // to access the address of the original variable
    int _age = *pointer;        // copy original variable value through pointer
    printf("%d\n", _age);
    printf("%d", pointer);      // to print pointer address
    // printf("%d", *pointer);      // to print the value of the pointed variable using pointer address
    return 0;
}
