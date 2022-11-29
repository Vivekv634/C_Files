#include <stdio.h>

int main()
{
    float minor, major, area, pi = 3.14;
    printf("Enter the value of minor axes : ");
    scanf("%f", &minor);
    printf("Enter the value of major axes : ");
    scanf("%f", &major);
    area = pi * minor * major;
    printf("The area of the elipse is %.3f", area);
    return 0;
}
