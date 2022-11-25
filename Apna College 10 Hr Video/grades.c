#include <stdio.h>

int main()
{
    float marks;
    printf("Enter your marks : ");
    scanf("%f", &marks);
    if (marks <= 100 && marks >= 90)
    {
        printf("You got A+");
    }
    else if (marks < 90 && marks >= 70)
    {
        printf("You got A");
    }
    else if (marks < 70 && marks >= 30)
    {
        printf("You got B");
    }
    else if (marks < 30 && marks >= 0)
    {
        printf("You got C");
    }
    else
    {
        printf("Invalid Input!");
    }

    return 0;
}
