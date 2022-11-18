// #include <stdio.h>

// int main()
// {
//     int n, value, sum;
//     float marks;
//     printf("Enter the number of subjects : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("Enter marks for subject %d : ", i);
//         scanf("%d", &value);
//         sum += value;
//     }
//     marks = sum / n;

//     if (marks>90)
//     {
//         printf("A+");
//     }
//     else if (marks<=90 && marks >80)
//     {
//         printf("A");
//     }
//     else if (marks<=80 && marks >70)
//     {
//         printf("B");
//     }
//     else if (marks<=70 && marks >60)
//     {
//         printf("C");
//     }
//     else if (marks<=60 && marks >50)
//     {
//         printf("D");
//     }
//     else
//     {
//         printf("Invalid");
//     }

//     return 0;
// }
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    float m, sum = 0, a;
    printf("How many Subject runs in your Institute ? ");
    scanf("%d", &n);
    printf("\nEnter marks obtained in %d Subjects: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &m);
        sum = sum + m;
    }
    a = sum / n;
    printf("\nGrade = ");
    if (a >= 91 && a <= 100)
        printf("A1");
    else if (a >= 81 && a < 91)
        printf("A2");
    else if (a >= 71 && a < 81)
        printf("B1");
    else if (a >= 61 && a < 71)
        printf("B2");
    else if (a >= 51 && a < 61)
        printf("C1");
    else if (a >= 41 && a < 51)
        printf("C2");
    else if (a >= 33 && a < 41)
        printf("D");
    else if (a >= 21 && a < 33)
        printf("E1");
    else if (a >= 0 && a < 21)
        printf("E2");
    else
        printf("Invalid!");
    getch();
    return 0;
}
