/*Write a program to enter at least 25 element in the array which may consider duplicate
value if there are duplication in the value remove that duplication and greater 
then another array which do not consists and duplicate value.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[25], uni[25], n, i, j, k = 0, Dep;

    printf("Enter number of elements (max 25): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	{
		printf("Enter your %d element: ",i+1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
	{
        Dep = 0;
        for (j = 0; j < k; j++)
		{
            if (arr[i] == uni[j])
			{
                Dep = 1;
                break;
            }
        }
        if (!Dep)
		{
            uni[k++] = arr[i];
        }
    }

    printf("Unique elements are:\n");
    for (i = 0; i < k; i++)
	{
        printf("%d ", uni[i]);
    }
    printf("\n");
    return 0;
}

