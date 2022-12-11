#include <stdio.h>
#include <string.h>

int checkChar(char str[], char ch)
{
    int n;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            return n = 1;
        }
        else
        {
            return n = 0;
        }
    }
}
int main()
{
    int num;
    char str[100], ch;
    printf("Enter the string : ");
    fgets(str, 100, stdin);
    printf("Enter the character you want to search : ");
    scanf("%s", &ch);
    num = checkChar(str, ch);
    printf("%d", num);
    // (num == 1) ? printf("Character is present in the string") : printf("Character is not present in the string");
    return 0;
}
