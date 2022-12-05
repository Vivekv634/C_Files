#include <stdio.h>


float percentage(float m1, float m2, float m3)
{
    float total = m1 + m2 + m3;
    return (total * 100.0) / 300.0;
}
int main()
{
    float maths, science, sanskrit;
    printf("Enter marks for maths : ");
    scanf("%f", &maths);
    printf("Enter marks for science : ");
    scanf("%f", &science);
    printf("Enter marks for sanskrit : ");
    scanf("%f", &sanskrit);

    printf("Percentage : %.3f", percentage(maths, science, sanskrit));
    return 0;
}
