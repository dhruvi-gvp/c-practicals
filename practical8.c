//Write a program to create structure  called student with three members: name(a string), age(an integer), and grade(a float).
#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int age;
    float grade;
};

void main()
{
    struct student id;
    
    printf("Enter student name: ");
    scanf("%s", &id.name);

    printf("Enter student age: ");
    scanf("%d", &id.age);
    
    printf("Enter student grade: ");
    scanf("%f", &id.grade);

    printf("\nStudent name is: %s\n", id.name);
    printf("Student age is: %d\n", id.age);
    printf("Student grade is: %0.2f\n", id.grade);

}
