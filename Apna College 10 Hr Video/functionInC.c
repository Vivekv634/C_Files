#include <stdio.h>

// this is function prototype
void printHello();

int main()
{
    printHello();   // calling the function
    printHello();
    return 0;
}

// defining function
void printHello()
{
    printf("Hello World!\n");
}
