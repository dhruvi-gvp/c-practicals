#include<stdio.h>
void sortAscending(int arr[], int n)
{
    int i, j;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void main()
{
    int i;
    int arr[n], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortAscending(arr, n);

    printf("Sorted array in Ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");
}