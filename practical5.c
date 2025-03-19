/*write a program to take input 3X3 matrix and print the data formated matrix way. */
#include <stdio.h>

void main()
{
	int i, j;
    int matrix[3][3]; 

    printf("Enter elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            printf("Enter element at [%d][%d] position: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++)
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

