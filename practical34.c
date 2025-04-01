//Write a program to handle string using pointer.
#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    
    char *str;

    int length, i;

    printf("Enter the length of the string: ");
    scanf("%d", &length);

    str = (char *)malloc((length + 1) * sizeof(char));

    if (str == NULL) 
	{
        printf("Memory allocation failed!\n");
        return 1;  
    }

    printf("Enter a string: ");
    getchar(); 
    fgets(str, length + 1, stdin);

    printf("You entered: %s", str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = str[i] - 'a' + 'A'; 
        }
    }

    printf("Converted to uppercase: %s", str);

    free(str);

    return 0;
}

