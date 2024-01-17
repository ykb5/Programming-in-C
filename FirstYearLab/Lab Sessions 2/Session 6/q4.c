/*
*Yogesh Kumar Bhatt 20011189 F
*C program to accept a string from the user and print by removing all the punctuations character from it.
*/
#include<stdio.h>
int main()
{
    char str[150];
    int i, j;
    
    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; ++i)
    {
        while (!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ' || str[i] == '\0'))
        {
            for(j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0';
        }
    }
    puts(str);
    
    return 0;
}