//To find the factorial of a number.
#include <stdio.h>
int main()
{
    int n;
    float fact=1;
    scanf("%d", &n);
    for(int i=n; i>0; i--)
        fact=fact*i;
    printf("%.2f", fact);

    return 0;
}