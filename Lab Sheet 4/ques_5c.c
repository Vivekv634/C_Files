// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d", &num);
//     for (int i = 1; i <=num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
#include <stdio.h>

int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d %d %d", i, j, m);
    return 0;
}
