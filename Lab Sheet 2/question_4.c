#include <stdio.h>

int main()
{
    // int a, b, temp;
    // printf("Enter the value of A : ");
    // scanf("%d", &a);
    // printf("Enter the value of B : ");
    // scanf("%d", &b);
    // printf("Before Swaping:\nA : %d\nB : %d\n", a, b);
    // temp = a;
    // a = b;
    // b = temp;
    // printf("After Swaping:\nA : %d\nB : %d\n", a, b);

    int a, b;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);
    printf("Before Swaping:\nA : %d\nB : %d\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After Swaping:\nA : %d\nB : %d\n", a, b);

    return 0;
}
