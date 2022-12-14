#include <stdio.h>
#include <string.h>

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Character is present!");
            return;
        }
    }
    printf("Character is not present!");
}
int main()
{
    int num;
    char str[] = "Vivek Vaish", ch = 'i';
    checkChar(str, ch);
    return 0;
}
