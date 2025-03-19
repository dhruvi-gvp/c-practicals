//wrire a program to insert few elements into array of float data type findout maximum value all using array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    float maximum;

    printf("Enter the number of element: ");
    scanf("%d", &a);

    float arr[a];

    printf("Enter %d elements:\n",a);

    for(i=0; i<a; i++)
    {
        printf("\nEnter your %d number : ",i+1);
        scanf("%f",&arr[i]);
    }

    maximum = arr[0];
    
    for(i=0; i<a; i++)
    {
        if (maximum < arr[i])
        {
            maximum = arr[i]; 
        }
    }
    printf("\nThe maximum value is: %0.2f", maximum); 

    return 0;
}

