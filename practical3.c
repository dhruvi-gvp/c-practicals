//Write a program to find sum of the value and average of the value given user and store in the array element.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float array[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%f", &array[i]);
        sum += array[i]; 
    }

    average = sum / n;

    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

}
