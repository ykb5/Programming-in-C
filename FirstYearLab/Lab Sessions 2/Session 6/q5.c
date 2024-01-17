/*
*Yogesh Kumar Bhatt 20011189 F
*C program that returns a string by deleting ‘m’ characters from a position ‘n’ of a string to the calling program.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[30];
    int m, n, i;

    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the string: ");
    gets(str);
    printf("\nEnter the number of characters to be deleted: m and from what position: n to be extracted respectively: ");
    scanf("%d%d", &m, &n);

    if(n+m>strlen(str))
    {
        printf("\nInvalid Index");
        exit(0);
    }
    for (i=m+n-1; i<=strlen(str); i++)
    {
        str[i-m]=str[i];
    }
    printf("\n%s", str);

    return 0;
}