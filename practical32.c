#include<stdio.h>
void main()
{
    float no1, no2;
    float *a1, *a2;

    a1 = &no1;
    a2 = &no2;

    printf("Enter first number: ");
    scanf("%f", a1);

    printf("Enter second number: ");
    scanf("%f", a2);

    printf("\nYou Enterd : \n");
    printf("First number: %.2f\n", *a1);
    printf("Second number: %.2f\n", *a2);
}

