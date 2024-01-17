#include <stdio.h>
int main()
{
    printf("Yogesh Kumar Bhatt");
    int i;
    char name[15], emp[4], sal[6];
    FILE *fptr;
    fptr = fopen("ABC.txt", "w");
    if (fptr == NULL)
    {
        return 0;
    }
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter details for Employee %d:", i+1);
        printf("\nEnter Name: ");
        scanf("%[^\n]s",name);
        fprintf(fptr, "%s\t", name);
        getchar();
        printf("\nEnter Emp Code: ");
        scanf("%[^\n]s",emp);
        fprintf(fptr, "%s\t", emp);
        getchar();
        printf("\nEnter Gross Salary: ");
        scanf("%[^\n]s",sal);
        fprintf(fptr, "%s\n", sal);
        getchar();
    }
    return 0;
}
