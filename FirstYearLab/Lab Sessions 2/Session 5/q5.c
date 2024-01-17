/*
*Yogesh Kumar Bhatt 20011189 F
*C program to count the number of words in a string.
*/
#include <stdio.h>
int main()
{
    char s[100];
    int i=0,j=0, count=1;
    
    printf("Yogesh Kumar Bhatt");
    printf ("\nEnter the string: ");
    gets (s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==' ')
            count=0;
        else
        {
            count=1;
            break;
        }
    }
    for(j=i; s[j]!='\0'; j++)
    {
        if (s[j] ==' ')
            count++;
    }
    printf("\nNumber of words in a string = %d", count);
    
    return 0;
}