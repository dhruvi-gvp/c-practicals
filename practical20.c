#include<stdio.h>
#include<string.h>

struct person
{
    char name[50];
    int age;
};

void printpersons(struct person persons[], int n)
{
    int i;
    printf("List of persons:\n");
    for(i=0; i<n; i++)
    {
        printf("Name: %s, Age: %d\n", persons[i].name, persons[i].age);
    }
}

void main()
{
    struct person persons[100];
    int n;
    int i;

    printf("Enetr number of persons: ");
    scanf("%d", &n);
    getchar();

    for(i=0; i<n; i++)
    {
        printf("Enter name of person %d: ", i+1);
        fgets(persons[i].name, sizeof(persons[i].name), stdin);
        persons[i].name[strcspn(persons[i].name, "\n")] = 0;

        printf("Enter age of person %d: ", i+1);
        scanf("%d", &persons[i].age);
        getchar();
    }

    printpersons(persons, n);
}