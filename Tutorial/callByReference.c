#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int a, b;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);

    printf("A: %d & B: %d\n", a, b);
    swap(&a, &b);
    printf("After swaping\nA: %d & B: %d", a, b);
    return 0;
}
