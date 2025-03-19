/* Write a program to find addition of two matricx using array. */
#include<stdio.h>
void main()
{
    int ro, co, i, j;
    printf("Enter the rows and colums of matricx: ");
    scanf("%d %d", &ro, &co);

    int matricx1[ro][co], matricx2[ro][co], result[ro][co];

    printf("\nFirst metricx element:-");
    for(i=0; i<ro; i++)
    {
        for(j=0; j<co; j++)
        {
            printf("\nEnter the element at [%d][%d] position: ", i+1, j+1);
            scanf("%d", &matricx1[i][j]);
        }
    }
    
    printf("\nSecond metricx element:-");
    for(i=0; i<ro; i++)
    {
        for(j=0; j<co; j++)
        {
            printf("\nEnter the element at [%d][%d] position: ", i+1, j+1);
            scanf("%d", &matricx2[i][j]);
        }
    }
	printf("The first matrix is : \n");

    for (i = 0; i < ro; i++) 
    {
        for (j = 0; j < co; j++) 
        {
            printf("%d ", matricx1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is : \n");

    for (i = 0; i < ro; i++) 
    {
        for (j = 0; j < co; j++) 
        {
            printf("%d ", matricx2[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<ro; i++)
    {
        for(j=0; j<co; j++)
        {
            result[i][j] = matricx1[i][j] + matricx2[i][j];
        }
    }

    printf("\nThe addition of two matricx is: \n");
    for(i=0; i<ro; i++)
    {
        for(j=0; j<co; j++)
        {
            printf(" %d", result[i][j]);
        }
        printf("\n");
    }
}

