//C program to find N fibonacci numbers
#include <stdio.h>
//recursive function
int fibr(int n)
{
    if (n<=1)
        return n;
    else
        return fibr(n-1) + fibr(n-2);
}
//iterative function
int fibi(int n)
{
    int t1=0, t2=1, t3=0;
    if(n<1)
        return 0;
    else
    {
        for(int i=1; i<n; i++)
        {
            t1=t2;
            t2=t3;
            t3=t1+t2;
        }
    return t3;
    } 
}

int main ()
{
    int n;

    printf("Enter the Number: ");
    scanf("%d", &n);
        
    printf("The %dth Fibonacci number is %d (Using Recursion)\n", n, fibr(n-1));
    printf("The %dth Fibonacci number is %d (Using Iteration)\n", n, fibi(n));

    return 0;
}