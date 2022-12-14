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
    struct student ece[100];

    ece[0].rollno = 1001;
    ece[0].cgpa = 8.8;
    strcpy(ece[0].name, "Vivek");
    printf("Name : %s\n", ece[0].name);
    printf("Rollno : %d\n", ece[0].rollno);
    printf("CGPA : %.3f\n\n", ece[0].cgpa);

    ece[1].rollno = 1002;
    ece[1].cgpa = 9.8;
    strcpy(ece[1].name, "Dakshita");
    printf("Name : %s\n", ece[1].name);
    printf("Rollno : %d\n", ece[1].rollno);
    printf("CGPA : %.3f\n\n", ece[1].cgpa);

    ece[2].rollno = 1003;
    ece[2].cgpa = 7.8;
    strcpy(ece[2].name, "Om");
    printf("Name : %s\n", ece[2].name);
    printf("Rollno : %d\n", ece[2].rollno);
    printf("CGPA : %.3f\n\n", ece[2].cgpa);
    return 0;
}
