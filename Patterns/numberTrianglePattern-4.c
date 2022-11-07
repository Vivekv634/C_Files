#include <stdio.h>

void number_triangle_pattern_4(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("");
        }
        
    }
    
}
int main()
{
    
    return 0;
}
