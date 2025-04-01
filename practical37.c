//Write a program to access memory for students name data using pointer and write their input/output code.
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int numStudents;
    int i;
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    char **studentNames = (char **)malloc(numStudents * sizeof(char *));
    
    if (studentNames == NULL)
	{
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < numStudents; i++) 
	{
        studentNames[i] = (char *)malloc(100 * sizeof(char));  
        
        if (studentNames[i] == NULL) 
		{
            printf("Memory allocation for student %d's name failed!\n", i + 1);
            return 1;
        }
    }

    getchar();  
    for ( i = 0; i < numStudents; i++) 
	{
        printf("Enter the name of student %d: ", i + 1);
        fgets(studentNames[i], 100, stdin);  
    }

    printf("\nStudent Names:\n");
    for (i = 0; i < numStudents; i++) 
	{
        printf("Student %d: %s", i + 1, studentNames[i]); 
    }

    for ( i = 0; i < numStudents; i++) 
	{
        free(studentNames[i]);  
    }
    free(studentNames);  

    return 0;
}

