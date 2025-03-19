//write a program to find minimum value from the given array element using function.
#include<stdio.h>
void min(int a, float arr[])
{
	int i;
	float minimum;
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
}
void main()
{
	int a;

    printf("Enter the number of element: ");
    scanf("%d", &a);

    float arr[a];

    printf("Enter %d elements:\n",a);
    min(a, arr);

}
