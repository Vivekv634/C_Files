#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter the Number : ");
        scanf("%d", &n);
        if (n%7 == 0)
        {
            printf("Exiting the program...!");
            break;
        }
        
    } while (1);
    
    return 0;
}
