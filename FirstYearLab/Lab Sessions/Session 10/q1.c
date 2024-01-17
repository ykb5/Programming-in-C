//To generate prime numbers in a range from 1 to N.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=2; i<=n; i++)
    {
        int flag=0;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
                flag=1;
        }
        if(flag==0)
            printf("%d ", i);
    }

    return 0;
}