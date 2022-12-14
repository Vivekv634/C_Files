#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student sname)
{
    printf("Name : %s\n", sname.name);
    printf("Roll no. : %d\n", sname.roll);
    printf("CGPA : %.3f\n\n", sname.cgpa);
}

int main()
{
    struct student vivek = {1001, 8.9, "Vivek"};
    struct student om = {1002, 7.8, "Om"};
    printInfo(vivek);
    printInfo(om);
    return 0;
}
