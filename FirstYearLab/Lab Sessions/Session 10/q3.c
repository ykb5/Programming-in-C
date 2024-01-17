//To count the number of vowels and consonants by accepting the value of N.
#include <stdio.h>
#include <string.h>
int main()
{
    char c[50];
    int vow=0, cons=0;
    scanf("%[^\n]c", c);
    for(int i=0; i<=strlen(c); i++)
    {
        if(c[i]>='a' && c[i]<='z' || c[i]>='A' && c[i]<='Z')
        {
            switch(c[i])
            {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    vow++;
                    break;
                default:
                    cons++;
                    break;
            }
        }
    }
    printf("Vowels = %d, Consonants = %d\n", vow, cons);

    return 0;
}