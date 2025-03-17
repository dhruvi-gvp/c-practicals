#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], d[100];

    printf("Enter a string: ");
    scanf("%s", &s);

    strcpy(d,s);
    printf("Copied string: %s\n", d);
    return 0;
}