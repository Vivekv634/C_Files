#include <stdio.h>
float pi = 3.14;
float areaCircle(float radius)
{
    return pi * radius * radius;
}

float areaSquare(float side)
{
    return side * side;
}

float areaRectangle(float length, float width)
{
    return length * width;
}

int main()
{
    float side, radius, length, width;
    printf("Enter the length of the side of square : ");
    scanf("%f", &side);
    printf("Enter the length of the reactangle : ");
    scanf("%f", &length);
    printf("Enter the width of the reactangle : ");
    scanf("%f", &width);
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);

    printf("Area of square : %.3f\n", areaSquare(side));
    printf("Area of Rectangle : %.3f\n", areaRectangle(length, width));
    printf("Area of Circle : %.3f\n", areaCircle(radius));
    return 0;
}
