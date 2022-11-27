#include <stdio.h>

int main()
{
    int n;
    // while (1)
    // {
    //     printf("Enter the Number : ");
    //     scanf("%d", &n);
    //     if (n % 2 != 0)
    //     {
    //         printf("You entered ODD number...exiting!");
    //         break;
    //     }
    // }

    // do while loop is more preferable over while loop and for loop for this condition!
    do
    {
        printf("Enter the Number : ");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            printf("You entered ODD number...exiting!");
            break;
        }

    } while (1);

    return 0;
}
