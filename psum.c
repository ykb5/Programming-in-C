//Sum of prime numbers.
#include <stdio.h>
int prime(int n)
{
    int flag=0;
    for(int i=2; i<=n/2; i++)
        if(n%i==0)
            flag=1;
    if(flag==0)
        return flag;
    else
        return n;
}

int main()
{
    int s, e, sum=0;
    printf("\nEnter the starting and ending points: ");
    scanf("%d %d", &s, &e);
    for(int i=s; i<=e; i++)
    {
        sum+=prime(i);
    }
    return 0;
}