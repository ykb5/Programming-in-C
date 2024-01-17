#include <stdio.h>
int main()
{
    printf("Yogesh Kumar Bhatt");
    char ch, str[100];
    FILE *fptr1, *fptr2;

    printf("\nEnter the text: ");
    scanf("%[^\n]s", str);
    fptr1 = fopen("original.txt", "w");
    if(fptr1 == NULL)
        return 0;

    fputs(str,fptr1);
    fclose(fptr1);
    fptr1 = fopen("original.txt", "r");
    fptr2 = fopen("copy.txt", "w");
    if(fptr1 == NULL || fptr2 == NULL)
        return 0;

    while((ch=fgetc(fptr1))!=EOF)
    {
        if(ch!=32)
        {
            fputc(ch, fptr2);
        }
    }
    return 0;
}
