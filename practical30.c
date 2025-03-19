//Write a program to create nested structure for student data like sno, sdob, sres prepare another structure to oragnised data of the dob.
#include <stdio.h>
#include <string.h>

struct DOB 
{
    int day;
    int month;
    int year;
};

struct Student 
{
    int sno;       
    struct DOB sdob;
    char sres[10];  
};

void main() 
{

    struct Student students[100]; 

	int i , n;
	
	printf("Enter the number of student: ");
	scanf("%d" ,&n);
	
    for (i = 0; i < n; i++) 
	{
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter Student Number: ");
        scanf("%d", &students[i].sno);

        printf("Enter Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &students[i].sdob.day, &students[i].sdob.month, &students[i].sdob.year);

        printf("Enter Result (Pass/Fail): ");
        scanf("%s", students[i].sres);
    }

    for (i = 0; i < n; i++) 
	{
        printf("\nStudent Number: %d\n", students[i].sno);
        printf("Date of Birth: %02d/%02d/%d\n", students[i].sdob.day, students[i].sdob.month, students[i].sdob.year);
        printf("Result: %s\n", students[i].sres);
    }

}

