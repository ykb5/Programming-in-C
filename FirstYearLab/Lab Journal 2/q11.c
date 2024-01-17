#include <stdio.h>
int main()
{
    int i=0;
    char s1[50],s2[50];
    
    printf("Enter String s1: ");
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