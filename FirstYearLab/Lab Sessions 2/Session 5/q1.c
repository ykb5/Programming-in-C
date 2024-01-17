/*
*Yogesh Kumar Bhatt 20011189 F
*C program to copy a string to another without using strcpy function.
*/
#include <stdio.h>
int main()
{
    int i=0;
    char s1[50],s2[50];
    
    printf("Yogesh Kumar Bhatt");
    printf("\nEnter String s1: ");
    scanf("%[^\n]s",s1);
    
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("\nString s1: %s",s1);
    printf("\nString s2: %s",s2);
    
    return 0;
}