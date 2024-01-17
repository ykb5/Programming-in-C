/*
*Yogesh Kumar Bhatt 20011189 F
*C program to extract a portion of a character string and print the extracted string.
*/
#include <stdio.h>
int main() 
{
    char str[100], s[100];
    int a, b, c = 0;
    
    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the string: ");
    gets(str);
    
    printf("\nEnter the number of characters to be extracted, m: ");
    scanf("%d", &a);
    printf("\nAnd position, n to be extracted: ");
    scanf("%d", &b);
    
    while (c < b)
    {
        s[c] = str[a+c-1];
        c++;
    }
    s[c] = '\0';
    
    if (a>=strlen(str))
        printf("\nNot Possible");
    else
        printf("\nis an %s", s);
    
    return 0;
}