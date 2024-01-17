// C program to find GCD and LCM of two numbers
#include <stdio.h>

//recursive function for gcd
int gcdr(int a, int b)
{
	if (a == 0)
        return b;
	if (b == 0)
        return a;
    
    if (a == b)
        return a;

	if (a > b)
        return gcdr(a-b, b);
    else
        return gcdr(a, b-a);
}
//recursive function for lcm
int lcmr(int a, int b)
{
    return (a*b)/gcdr(a,b);
}
//iterative function for gcd
int gcdi(int a, int b)
{
    if(a=b)
        return a;
    else
    {
        for (int i=1; i<=a && i<=b; ++i)
        {
            if (a%i == 0 && b%i == 0)
                return i;
        }
    }        
}
//iterative function for lcm
int lcmi(int a, int b)
{
    return (a*b)/gcdi(a,b);
}
int main()
{
	int a , b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nLCM of %d and %d is: %d (Using Recursion)", a, b, lcmr(a,b));
    printf("\nLCM of %d and %d is: %d (Using Iteration)", a, b, lcmi(a,b));
    printf("\nGCD of %d and %d is: %d (Using Recursion)", a, b, gcdr(a,b));
    printf("\nGCD of %d and %d is: %d (Using Iteration)", a, b, gcdi(a,b));

	return 0;
}