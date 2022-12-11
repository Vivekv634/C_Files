#include <stdio.h>
#include <string.h>

int main()
{
    // char fname[100];
    // char lname[50];
    // printf("Enter your First Name : ");
    // fgets(fname, 100, stdin);
    // printf("Enter your Second Name :");
    // fgets(lname, 100, stdin);
    // printf("Your name is ");
    // strcat(fname, lname);
    // printf(fname);
    // return 0;
    char fname[100] = "Hello ";
    char lname[] = "World";
    strcat(fname, lname);
    puts(fname);
    return 0;
}
