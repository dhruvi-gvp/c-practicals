//Write a program to create float array of 25 element and access element for input and output using pointer.
#include <stdio.h>

void main() 
{
    float arr[25];
    int i;

    float *ptr = arr; 

    printf("Enter 25 float numbers:\n");
    for (i = 0; i < 25; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%f", ptr + i); 
    }

    printf("\nYou entered the following numbers:\n");
    for (i = 0; i < 25; i++) 
	{
        printf("Element %d: %.2f\n", i + 1, *(ptr + i)); 
    }
}

