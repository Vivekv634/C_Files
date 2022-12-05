#include <stdio.h>
#include <math.h>

float calcRoot(int num)
{
    float root = 0;
    if (num>0)
    {
        root = sqrt(num);
    }
    
    return root;
}

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    printf("The square root of %d is %.3f", num, calcRoot(num));
    return 0;
}
