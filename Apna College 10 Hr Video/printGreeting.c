#include <stdio.h>

void printNamaste()
{
    printf("Namaste!");
}
void printBonjour()
{
    printf("Bonjour!");
}
int main()
{
    char n;
    printf("Enter I for Indian OR F for French : ");
    scanf("%c", &n);

    if (n == 'I' || n == 'i')
    {
        printNamaste();
    }
    else if (n == 'f' || n == 'F')
    {
        printBonjour();
    }

    return 0;
}
