//Write a program to create employee struct which as three number like Eno, Enm, Esal.
#include<stdio.h>

struct employee
{
    int Enum;
    char Ename[20];
    float Esalary;
};

void main()
{
    struct employee emp;

    printf("Enter Employee number: ");
    scanf("%d", &emp.Enum);

    printf("Enter Employee name: ");
    scanf("%s", &emp.Ename);

    printf("Enter Employee salary: ");
    scanf("%f", &emp.Esalary);

    printf("\nEmployee Detailes:--\n");

    printf("Employee name %s\n", emp.Ename);
    printf("Employee number %d\n", emp.Enum);
    printf("Employee salary %f\n", emp.Esalary);
    
}