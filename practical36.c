//Write a program to handle character array and integer array using pointer and dynamic memory allocation ( malloc using ).
#include <stdio.h>
#include <stdlib.h>  

int main() 
{
    char *charArray;
    int *intArray;
    int i;

    int charArraySize;
    printf("Enter the size of the character array: ");
    scanf("%d", &charArraySize);

    charArray = (char *)malloc((charArraySize + 1) * sizeof(char));

    if (charArray == NULL) 
	{
        printf("Memory allocation for character array failed!\n");
        return 1;
    }

    printf("Enter a string (max %d characters): ", charArraySize);
    getchar();  
    fgets(charArray, charArraySize + 1, stdin); 

    printf("You entered the string: %s\n", charArray);

    int intArraySize;
    printf("Enter the size of the integer array: ");
    scanf("%d", &intArraySize);

    intArray = (int *)malloc(intArraySize * sizeof(int));

    if (intArray == NULL) 
	{
        printf("Memory allocation for integer array failed!\n");
        free(charArray); 
        return 1;
    }

    printf("Enter %d integers:\n", intArraySize);
    for (i = 0; i < intArraySize; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &intArray[i]);
    }

    printf("You entered the integers: ");
    for (i = 0; i < intArraySize; i++) 
	{
        printf("%d ", intArray[i]);
    }
    printf("\n");

    free(charArray);
    free(intArray);

    return 0;
}

