//Write a program to read array using by function.
#include<stdio.h>
void read_data(int a, char arr[])
{
    int i;
    for(i=0; i<a; i++)
    {
        printf("\nEnter your %d number: ", i+1);
        scanf("%s", &arr[i]);
    }
    printf("array read succsessfully...!!");
}
void main()
{
    int a;
    printf("Enter array size: ");
    scanf("%d", &a);
    char arr[a];
    read_data(a, arr);
}
