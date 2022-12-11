#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m)
{
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}
int main()
{
    char str[] = "Hello World";
    int length, n, m;
    length = sizeof(str) / sizeof(str[0]);
    printf("Enter the initial index (0 to %d): ", length - 1);
    scanf("%d", &n);
    printf("Enter the final index (%d to %d): ", n, length - 1);
    scanf("%d", &m);
    printf("String after slicing :");
    slice(str, 3,6);
    return 0;
}
