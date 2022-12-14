#include <stdio.h>
#include <string.h>
typedef struct ComputerScienceStudent
{
    int roll;
    float cgpa;
    char name[100];
} css;
int main()
{
    css vivek;
    vivek.roll = 1001;
    vivek.cgpa = 8.9;
    strcpy(vivek.name, "Vivek");

    printf("Name : %s\n", vivek.name);
    printf("Rollno. : %d\n", vivek.roll);
    printf("CGPA : %.3f\n\n", vivek.cgpa);

    css dakshita;
    dakshita.roll = 1002;
    dakshita.cgpa = 9.8;
    strcpy(dakshita.name, "Dakshita");

    printf("Name : %s\n", dakshita.name);
    printf("Rollno. : %d\n", dakshita.roll);
    printf("CGPA : %.3f\n\n", dakshita.cgpa);
    return 0;
}
