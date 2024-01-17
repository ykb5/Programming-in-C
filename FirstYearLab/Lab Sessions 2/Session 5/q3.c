/*
*Yogesh Kumar Bhatt 20011189 F
*C program to reverse a given string.
*/
#include <stdio.h>
int length(char*p)
{
    int i=0;
    while(*p!='\0')
    {
        i++;
        p++;
    }
    return i;
}

int main()
{
    char s[50], r[50];
    int n, i, j;

    printf ("Yogesh Kumar Bhatt");
    printf("\nEnter the string: ");
    gets(s);
    
    printf("\nAfter reversing: ");
    n=length(s);
    for (i=n-1, j=0; i>=0, j<n; i--, j++)
    {
        r[j]=s[i];
    }
    r[j]='\0';
    puts(r);
    
    return 0;
}