#include <stdio.h>
int main()
{
    printf("Yogesh Kumar Bhatt");
    int N, sem;
    char name[50], USN[10];

    printf("\nEnter number of students: ");
    scanf("%d", &N);

    FILE *fptr;
    fptr = (fopen("D:\\UniversityData\\Students.txt", "w"));
    if (fptr == NULL)
        return 0;

    for (int i = 0; i < N; i++)
    {
        fflush(stdin);
        printf("\nFor student %d", i+1);
        printf("\nEnter Name: ");
        scanf("%[^\n]s", name);
        fprintf(fptr, "%s\t", name);
        fflush(stdin);
        printf("\nEnter USN: ");
        scanf("%[^\n]s", USN);
        fprintf(fptr, "%s\t", USN);
        fflush(stdin);
        printf("\nEnter Semester No.: ");
        scanf("%d", &sem);
        fprintf(fptr, "%d\n", sem);
        fflush(stdin);
    }
    fclose(fptr);
    return 0;
}