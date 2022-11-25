#include <stdio.h>

int main()
{
    float marks;
    printf("Enter the marks (0-100) : ");
    scanf("%f", &marks);
    if (marks > 30 && marks <= 100)
    {
        printf("You are Pass!");
    }
    else if (marks >= 0 && marks <= 30)
    {
        printf("You are Fail!");
    }
    else
    {
        printf("Invalid Input!");
    }

    // marks >= 30 && marks <= 100 ? printf("You are Pass!") : printf("You are Fail!");

    return 0;
}
