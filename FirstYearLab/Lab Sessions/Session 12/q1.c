//To design a function to compute the value of nCr by accepting n and r.
#include <stdio.h>
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n * fact (n-1);
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n-r));
}

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", nCr(n, r));

    return 0;
}