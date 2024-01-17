/*
*Yogesh Kumar Bhatt 20011189 F
*C program to concatenate two strings and display the concatenated string to the output screen.
*/
#include <stdio.h>
int main()
{
    char s1[50], s2[50], s3[50];
    int i, j;

    printf("Yogesh Kumar Bhatt");
    printf("\nInput string1: ");
    gets(s1);
    printf("\nInput string2: ");
    gets(s2);
    
    for(i=0; s1[i]!='\0'; i++)
    {
        s3[i] = s1[i];
    }
    for(j=0; s2[j]!='\0'; j++)
    {
        s3[i+j] = s2[j];
    }
    s3[i + j] = '\0';

    printf("\n%s",s3);
    
    return 0;
}