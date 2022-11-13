#include <stdio.h>

int main()
{
    int r;
    float pi = 3.14, area;
    printf("Enter the radius of the circle : ");
    scanf("%f", &r);
    area = pi*r*r;
    printf("The area of the circle with radius of %d is %d", r, area);
    return 0;
}
