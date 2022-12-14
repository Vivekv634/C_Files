#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    float cgpa;
    char name[100];
};

int main()
{
    struct student vivek;
    vivek.rollno = 1001;
    vivek.cgpa = 9.9;
    strcpy(vivek.name, "Vivek");
    printf("Name : %s\n", vivek.name);
    printf("Rollno : %d\n", vivek.rollno);
    printf("CGPA : %.3f\n", vivek.cgpa);
    return 0;
}
