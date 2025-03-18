//Write a program to find sum of 1 to n using recursion process.
#include<stdio.h>

int recursion(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n + recursion( n - 1);
}

void main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("sum of number from 1 to %d is: %d\n", n, recursion(n));
}