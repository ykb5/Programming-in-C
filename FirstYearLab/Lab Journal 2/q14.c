#include <stdio.h>
int compare(char a[],char b[])
{
    int flag=0,i=0;
    while(a[i]!='\0' &&b[i]!='\0') 
    {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
}
int main()
{
    char str1[20];
    char str2[20];
    int c;
    
    printf("Yogesh Kumar Bhatt");
    printf("\nEnter two strings: ");
    scanf("%s", str1);
    scanf("%s", str2);

    c = compare(str1,str2);
    if(c==0)
        printf("\nThe Strings are equal.");
    else
        printf("\nThe Strings are not equal.");
    
    return 0;
}