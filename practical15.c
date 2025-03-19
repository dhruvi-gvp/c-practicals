//write a program to find average of given array element using by function.
#include <stdio.h>

void ave(int n, float array[]) 
{
    float sum = 0, average;
    int i;
    for(i = 0; i<n; i++) 
    {
        printf("Enter your %d number: ", i + 1);
        scanf("%f", &array[i]);
        sum = sum + array[i]; 
    }

    average = sum / n;

    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
}

void main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float array[n];

    printf("Enter %d elements:\n", n);
    ave(n, array);
}

