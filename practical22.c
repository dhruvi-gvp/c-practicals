//Write a program to combine two string value (any personr / object name ) store in another variable using string library.
#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100], str2[100], combined[200];

    printf("Enter first string: ");
    scanf("%s", &str1);

    printf("Enter second string: ");
    scanf("%s", &str2);

    strcpy(combined, str1);
    strcat(combined, str2);
    printf("Combined string: %s\n", combined);
    return 0;
}