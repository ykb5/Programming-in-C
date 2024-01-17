//To find the sum of the following series by accepting N: 1/1^2 - 1/3^2 +1/5^2 - 1/7^2 - ....................1/N^2
#include <stdio.h>
int main()
{
    int n, sign=1;
    float sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i+=2)
    {
        sum=sum+sign*(1.0/(i*i));
        sign=sign*(-1);
    }
    printf("Sum: %.2f", sum);

    return 0;
}