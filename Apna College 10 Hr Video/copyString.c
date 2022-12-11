#include <stdio.h>
#include <string.h>

int main()
{
    char oldstr[] = "Hello";
    char newstr[] = "World";
    strcpy(oldstr, newstr);
    printf("Old String : %s", oldstr);
    return 0;
}
