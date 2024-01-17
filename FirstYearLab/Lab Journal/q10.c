//C program to find the permutaion
#include <stdio.h>
//using a function for factorial
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
  int m,n,mpn;

  printf("\nEnter two Numbers: ");
  scanf("%d%d", &m, &n);

  if(m>n)
  {
    mpn=fact(m)/fact(m-n);
    printf("The permutation P(%d,%d) is : %d",m,n,mpn);
  }
  else
    printf("Not Possible");
}