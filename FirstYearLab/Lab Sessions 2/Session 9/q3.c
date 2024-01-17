#include <stdio.h>
#include <string.h>

int main()
{
    printf("Yogesh Kumar Bhatt\n");
    char para1[50], para2[50], para3[50], str[500];
    int vow = 0, cons = 0;
    int i = 0;

    FILE *fptr1, *fptr2;
    fptr1 = fopen("ThreeParas.txt", "w");
    if (fptr1 == NULL)
        return 0;

    scanf("%[^\n]s", para1);
    fprintf(fptr1, "%s\n", para1);
    fflush(stdin);
    scanf("%[^\n]s", para2);
    fprintf(fptr1, "%s\n", para2);
    fflush(stdin);
    scanf("%[^\n]s", para3);
    fprintf(fptr1, "%s", para3);
    fclose(fptr1);

    fptr2 = fopen("ThreeParas.txt", "r");
    int ch = getc(fptr2);
    while (ch != EOF)
    {
        str[i++] = ch;
        ch = getc(fptr2);
    }
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            vow++;
        else if ((str[i] > 'A' && str[i] <= 'Z') || (str[i] > 'a' && str[i] <= 'z'))
            cons++;
    }
    printf("Vowels = %d Consonents = %d\n", vow, cons);
    printf("%s", str);
    fclose(fptr2);

    return 0;
}