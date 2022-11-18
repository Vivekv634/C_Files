#include <stdio.h>

int main()
{
    float n, a;
    float avg, sum;
    printf("Enter the number of values : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter value %d : ", i);
        scanf("%d", &a);
        sum += a;
    }
    avg = sum\n;
    printf("The average of %d numbers is : %f", n, avg);
    
    return 0;
}
