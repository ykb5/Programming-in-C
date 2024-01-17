/*
*Yogesh Kumar Bhatt 20011189 F
*C program to define, assign, read, and display two different structures.
*/
#include <stdio.h>

struct student_info
{
    char name[50], section[10];
    int id[20], contact[10];
} student;
struct bank_info
{
    char holder[50], ifsc[15], type[10];
    int number[15];
} bank;

int main()
{
    printf("Yogesh Kumar Bhatt");

    printf("\nEnter Student Information : ");
    printf("\nName : ");
    gets(student.name);
    printf("\nStudent ID : ");
    gets(student.id);
    printf("\nSection : ");
    gets(student.section);
    printf("\nContact : ");
    gets(student.contact);

    printf("\nEnter Bank Account Information : ");
    printf("\nBank Account Holder's Name : ");
    gets(bank.holder);
    printf("\nBank Account Number : ");
    gets(bank.number);
    printf("\nIFSC Code : ");
    gets(bank.ifsc);
    printf("\nAccount Type : ");
    gets(bank.type);

    printf("\nPrinting Information : \n");
    printf("\nStudent Information :");
    printf("\nName : %s\nStudent ID : %s\nSection : %s\nContact Number : %s\n", student.name, student.id, student.section, student.contact);

    printf("\nBank Account Information :");
    printf("\nAccount holder's name : %s\nAccount number : %s\nIFSC code: %s\nAccount type : %s\n", bank.holder, bank.number, bank.ifsc, bank.type);

    return 0;
}