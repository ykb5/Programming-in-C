//C program to compute the series
#include <stdio.h>
//recursive function
int seriesr(int n)
{
    if(n==0)
        return 0;
    else
        return (n%2?1:-1)*n*n+ seriesr(n-1);
}
//iterative function
int seriesi(int n)
{
    int i, sum=0, sign=1;

    for(i=1; i<=n; i++)
    {
        sum=sum+sign*(i*i);
        sign*=-1;
    }
    return sum;
}
int main()
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d",&n);

    printf("The sum of the series is: %d (Using Recursion)\n",seriesr(n));
    printf("The sum of the series is: %d (Using Iteration)\n",seriesi(n));

    return 0;
}