//To check if the number is single or multi-digit number.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n/10==0)
        printf("Single-digit number\n");
    else
        printf("Multi-digit number\n");

    return 0;
}