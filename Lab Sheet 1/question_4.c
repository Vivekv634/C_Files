#include <stdio.h>

int main()
{
    float r;
    float pi = 3.14, area;
    printf("Enter the radius of the circle : ");
    scanf("%f", &r);
    area = pi*r*r;
    printf("The area of the circle with radius of %.2f is %.3f", r, area);
    return 0;
}
