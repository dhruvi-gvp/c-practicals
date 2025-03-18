//Write a program to compare two string given by using string library.
#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100], str2[100];
    int r;

    printf("Enter the first string: ");
    scanf("%s", &str1);

    printf("Enter the second string: ");
    scanf("%s", &str2);

    r = strcmp(str1, str2);

    if(r==0)
    {
        printf("Strings are equal.\n");
    }

    else
    {
        printf("String are not equal.\n");
    }
}