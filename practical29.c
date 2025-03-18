//Write a program to create student struct which as like Sno, Snm, Sres using function.
#include<stdio.h>

struct data
{
    int Sno;
    char Snm[10];
    float Sres;
};

void main()
{
    struct data student;

    printf("Enter student number: ");
    scanf("%d", &student.Sno);

    printf("Enter student name: ");
    scanf("%s", &student.Snm);

    printf("Enter student result: ");
    scanf("%f", &student.Sres);

    printf("\nStudent Data:--\n");

    printf("student name %s\n", student.Snm);
    printf("student number %d\n", student.Sno);
    printf("student result %f\n", student.Sres);
}
