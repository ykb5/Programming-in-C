#include <stdio.h>
int bitwiseadd(int x, int y)
{
    while(y!=0)
    {
        int carry=x&y;
        x=x^y;
        y=carry<<1;
    }
    return x;
}
int main()
{
  int a, b;

  printf("\nEnter first number: ");
  scanf("%d",&a);
  printf("\nEnter second number: ");
  scanf("%d",&b);

  printf("\nAddition of %d and %d is: %d", a, b, bitwiseadd(a,b));

  return 0;
}