//Write a function to pass two float variable into a function and print sum of that number in the function.
#include <stdio.h>
float sum(float f1, float f2)
{
    float s;
    s = f1 + f2;
    //printf("Float value is : %0.2f", s);
    return s;
}
void main()
{
	printf("Sum of two float variable entered by user:");
    float f1, f2;
    printf("\nEnter float number1 : ");
    scanf("%f", &f1);
    printf("Enter float number2 : ");
    scanf("%f", &f2);
    printf("Sum of Float value is : %0.2f", sum(f1, f2));
}

