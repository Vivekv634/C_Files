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
    vivek.cgpa = 9.8;
    strcpy(vivek.name, "Vivek");

    struct student dakshita;
    dakshita.rollno = 1002;
    dakshita.cgpa = 9.9;
    strcpy(dakshita.name, "dakshita");

    struct student aditya;
    aditya.rollno = 1003;
    aditya.cgpa = 8.9;
    strcpy(aditya.name, "Aditya");

    struct student om = {1004, 7.8, "Om"};
    printf("Name: %s\n", om.name);
    printf("Rollno.: %d\n", om.rollno);
    printf("CGPA: %.3f\n", om.cgpa);
    return 0;
}
