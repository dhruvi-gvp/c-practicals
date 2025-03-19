//Write a proram to add of two matrix and substraction of two matrix.
#include<stdio.h>
void main()
{
    int i, j, row, colum;

    printf("Enter your row and colum of two matrix: ");
    scanf("%d %d", &row, &colum);

    printf("Enter your element of first matrix: \n");

    int matrix[row][colum], matrix2[row][colum], substraction[row][colum];

    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            printf("Enter the elment of first matrix at [%d][%d] position: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter your element of second matrix: \n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            printf("Enter the elment of second matrix at [%d][%d] position: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The first matrix is : \n");

    for (i = 0; i < row; i++) 
    {
        for (j = 0; j < colum; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is : \n");

    for (i = 0; i < row; i++) 
    {
        for (j = 0; j < colum; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            substraction[i][j] = matrix2[i][j] - matrix[i][j];
        }
    }

    printf("\nThe substarction of two enterd metrix is: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            printf("%d ",substraction[i][j]);
        }
        printf("\n");
    }
}
