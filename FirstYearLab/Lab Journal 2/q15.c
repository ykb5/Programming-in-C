#include <stdio.h>
int main()
{
    char str[1000];
    int n, i, j, k, count=0;

    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the string: ");
    gets(str);
    for(j=0; str[j]; j++);
        n=j;

    for(i=0; i<n; i++)
    {
        count=1;
        if(str[i])
        {
            for(j=i+1; j<n; j++)
            {
                if(str[i]==str[j])
                {
                    count++;
                    str[j]='\0';
                }
            }
            printf("%c - %d\n", str[i], count);
        }
    }
    return 0;
}