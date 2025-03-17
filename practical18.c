#include<stdio.h>

void sortDescending(int arr[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void main()
{
    int arr[100], n;
    int i;

    printf("Enetr number of element: ");
    scanf("%d", &n);

    printf("Enter %d element:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortDescending(arr, n);

    printf("Sorted array in descending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}