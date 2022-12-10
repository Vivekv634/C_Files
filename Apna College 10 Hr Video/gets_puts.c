#include <stdio.h>

int main()
{
    char name[100];
    // gets(name);     // this function is dangerous and outdated
    fgets(name, 100, stdin);
    puts(name);

    return 0;
}
