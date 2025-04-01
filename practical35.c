//Write a program to access runtime memory for float data and input data in that memory and print the data ( malloc using ).
#include <stdio.h>
#include <stdlib.h>  

int main() 
{
    float *ptr;

    ptr = (float *)malloc(sizeof(float));

    if (ptr == NULL) 
	{
        printf("Memory allocation failed!\n");
        return 1;  
    }

    printf("Enter a float number: ");
    scanf("%f", ptr);  

    printf("You entered: %.2f\n", *ptr); 

    free(ptr);

    return 0;
}

