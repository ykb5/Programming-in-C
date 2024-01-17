//To check whether the number is prime or not.
#include <stdio.h>
int main()
{
    int n, flag=0;
    scanf("%d", &n);
    for(int i=2; i<=n/2; i++)
        if(n%i==0)
            flag=1;
    if(flag==0)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}