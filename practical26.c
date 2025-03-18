//Write a program to find fibonacci series of using recursion proccess.
#include<stdio.h>
#include<math.h>
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

void main()
{
    int i, n;

    printf("Enter the number of terms in the fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for(i=0; i<n; i++)
    {
        printf("%d", fibonacci(i));
    }
    printf("\n");
}