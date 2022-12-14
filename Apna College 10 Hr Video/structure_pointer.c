#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student vivek = {1001, 8.9, "Vivek"};
    struct student *ptr = &vivek;
    printf("Name : %s\n", (*ptr).name);
    printf("Rollno. : %d\n", (*ptr).roll);
    printf("CGPA : %.3f\n", (*ptr).cgpa);
    return 0;
}
