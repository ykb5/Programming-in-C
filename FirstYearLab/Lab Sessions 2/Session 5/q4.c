/*
*Yogesh Kumar Bhatt 20011189 F
*C program to check whether given string is palindrome or not.
*/
#include <stdio.h>
int length(char*p)
{
    int i=0;
    while (*p!='\0')
    {
        i++;
        p++;
    }
    return i;
}

int main()
{
    char s[50], r[50];
    int n, i, j, flag=1;
    
    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the string: ");
    gets(s);
    
    n=length(s);
    for (i=n-1, j=0;i>=0, j<n; i--, j++)
    {
        r[j]=s[i];
    }
    r[j]='\0';
    for(i=0; i<n; i++)
    {
        if(s[i]!=r[i])
        {
            flag=0;
            break;
        }
        else
            flag=1;
    }
    if (flag==1)
        printf("\nString is palindrome.");
    else
        printf("\nString is not palindrome.");
    
    return 0;
}