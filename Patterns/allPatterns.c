#include <stdio.h>
#include "starTriangle.c"
#include "reverseStarTriangle.c"
#include "solidSquare.c"

int main()
{
    int n;
    printf("Choose the pattern from below :\n");
    printf("1. Star Pattern\n");
    printf("2. Reverse Star Pattern\n");
    printf("3. Solid Star Square\n");
    printf("Enter the serial number of the pattern : ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        star_triangle();
        break;

    case 2:
        reverse_star_triangle();
        break;

    case 3:
        solid_square();
        break;
    }
    return 0;
}
