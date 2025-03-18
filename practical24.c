//Write a program to find factorial number of using recursion process.
#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n * factorial( n-1 );
}

int main()
{
    int num;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}