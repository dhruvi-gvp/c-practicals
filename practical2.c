//write a program to insert few elements into array of float data type findout minimum value all using array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    float minimum;

    printf("Enter the number of element: ");
    scanf("%d", &a);

    float arr[a];

    printf("Enter %d elements:\n",a);

    for(i=0; i<a; i++)
    {
        printf("\nEnter your %d number : ",i+1);
        scanf("%f",&arr[i]);
    }

    minimum = arr[0];
    
    for(i=0; i<a; i++)
    {
        if (minimum > arr[i])
        {
            minimum = arr[i]; 
        }
    }
    printf("\nThe minimum value is: %0.2f", minimum); 

    return 0;
}

