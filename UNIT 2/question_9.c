#include <stdio.h>
#define PI 3.14f

int main()
{
    float radius;
    printf("Enter the radius : ");
    scanf("%f", &radius);
    float area = PI * radius * radius;
    float perimeter = 2 * PI * radius;
    printf("Area of Circle : %.02f \n", area);
    printf("Perimeter of Circle : %.02f", perimeter);
    return 0;
}
