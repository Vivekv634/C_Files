#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);
    printf("Enter the value of C : ");
    scanf("%d", &c);

    printf("Printing in FORWARD order :\nA : %d\nB : %d\nC : %d\n", a, b, c);
    printf("Printing in REVERSED order :\nC : %d\nB : %d\nA : %d\n", c, b, a);
    return 0;
}
