/*
*Yogesh Kumar Bhatt 20011189 F
*C program to display the details of the employee.
*/
#include <stdio.h>

struct employee_info
{
    char name[50], empcode[10], dob[20], salary[50];
} emp;

int print_info()
{
    printf("\n\tABC CORPORATION");
    printf("\nName : %s\nEmpCode : %s\nDOB : %s\nNet. Salary : %s", emp.name, emp.empcode, emp.dob, emp.salary);
}

int main()
{
    printf("Yogesh Kumar Bhatt");

    printf("\nEnter Employee Name : ");
    gets(emp.name);
    printf("\nEnter Emp Code : ");
    gets(emp.empcode);
    printf("\nEnter Employee DOB : ");
    gets(emp.dob);
    printf("\nEnter Employee Salary : ");
    gets(emp.salary);

    print_info();

    return 0;
}