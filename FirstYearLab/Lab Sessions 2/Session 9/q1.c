#include <stdio.h>
#include <string.h>

int main()
{
    printf("Yogesh Kumar Bhatt");
    char str[500];
    int i;

    FILE *fptr;
    fptr = fopen("para.txt", "r");
    if (fptr == NULL)
        return 0;
    
    printf("\nEnter a string: ");
    scanf("%[^\n]s", str);

    for (i=0; i<strlen(str); i++)
        if (str[i] == ' ')
            str[i] = '$';

    fprintf(fptr, "%s", str);
    printf("\n%s", str);
    fclose(fptr);

    return 0;
}