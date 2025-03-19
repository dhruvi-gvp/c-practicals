//Write a program to take input/output two float number using pointer.
#include <stdio.h>

void main() 
{
    float num1, num2;
    
    float *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter the first float number: ");
    scanf("%f", ptr1);  
    printf("Enter the second float number: ");
    scanf("%f", ptr2); 

    printf("\nYou entered:\n");
    printf("First number: %.2f\n", *ptr1);  
    printf("Second number: %.2f\n", *ptr2); 

}

