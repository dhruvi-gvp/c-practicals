//Write a program to sum of the matrix and substraction of the matrix using function.
#include<stdio.h>

void sub(int row, int colum, int matrix[row][colum], int matrix2[row][colum], int substraction[row][colum])
{
	int i, j;
    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < colum; j++) 
        {
            substraction[i][j] = matrix2[i][j] - matrix[i][j];
        }
    }

    printf("\nThe subtraction of two entered matrices is: \n");
    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < colum; j++) 
        {
            printf("%d ", substraction[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int i, j, row, colum;

    printf("Enter the number of rows and columns of two matrices: ");
    scanf("%d %d", &row, &colum);

    printf("Enter the elements of the first matrix: \n");

    int matrix[row][colum], matrix2[row][colum], substraction[row][colum];

    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < colum; j++) 
        {
            printf("Enter the element of the first matrix at [%d][%d] position: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: \n");

    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < colum; j++) 
        {
            printf("Enter the element of the second matrix at [%d][%d] position: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The first matrix is: \n");
    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < colum; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is: \n");
    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < colum; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    sub(row, colum, matrix, matrix2, substraction);
}

