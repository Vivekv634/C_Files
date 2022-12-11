#include <stdio.h>
#include <string.h>

int main()
{
    char password[100];
    char salt[] = "123";
    printf("Enter your password : ");
    scanf("%s", password);
    strcat(password, salt);
    printf("Password after salting : ");
    puts(password);
    return 0;
}
