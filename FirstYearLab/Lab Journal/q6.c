#include <stdio.h>
int main()
{
  int a, b, c, d, s;

  printf("Enter results of Four Tests:\n");
  scanf("%d%d%d%d", &a, &b, &c, &d);

  if(a<b && a<c && a<d)
    s=a;
  else if(b<a && b<c && b<d)
    s=b;
  else if(c<a && c<b && c<d)
    s=c;
  else
    s=d;

  printf("The average of best three test results is: %.2f",(float)((a+b+c+d-s)/3));

  return 0;
}