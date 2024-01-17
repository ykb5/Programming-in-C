#include <stdio.h>
union student_union
{
    int USN;
    char name[20];
    int sem_no;
    char course[20];
    float percentage;
} stu_u;

struct student_struct
{
    int USN;
    char name[20];
    int sem_no;
    char course[20];
    float percentage;
} stu_s;
int main()
{
    printf("Yogesh Kumar Bhatt");
    printf("\nUsing Union:");
    printf("\nEnter USN : ");
    scanf("%d", &stu_u.USN);
    printf("\nEnter Name : ");
    scanf("%s", &stu_u.name);
    printf("\nEnter Semester number : ");
    scanf("%d", &stu_u.sem_no);
    printf("\nEnter Course : ");
    scanf("%s", &stu_u.course);
    printf("\nEnter Percentage : ");
    scanf("%f", &stu_u.percentage);

    printf("\n");

    printf("\nUsing Structure:");
    printf("\nEnter USN : ");
    scanf("%d", &stu_s.USN);
    printf("\nEnter Name : ");
    scanf("%s", &stu_s.name);
    printf("\nEnter Semester number : ");
    scanf("%d", &stu_s.sem_no);
    printf("\nEnter Course : ");
    scanf("%s", &stu_s.course);
    printf("\nEnter Percentage : ");
    scanf("%f", &stu_s.percentage);

    printf("\nsize of Union : %d", sizeof(stu_u));
    printf("\nsize of Strucure : %d", sizeof(stu_s));
    if (sizeof(stu_u) < sizeof(stu_s))
        printf("\nUninon uses memory optimally.");
    else
        printf("\nStructure uses memory optimally.");
    
    return 0;
}