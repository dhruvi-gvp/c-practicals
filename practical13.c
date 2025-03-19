//Write a program to read array and print array using by function.
#include<stdio.h>
void read_data(int a, char arr[])
{
    int i;
    for(i=0; i<a; i++)
    {
        printf("\nEnter your %d number: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe given number stores in array are:--");

    for(i=0; i<a; i++)
    {
        printf("\n%d", arr[i]);
    }
}
void main()
{
    int a;
    printf("Enter array size: ");
    scanf("%d", &a);
    char arr[a];
    read_data(a, arr);
}

