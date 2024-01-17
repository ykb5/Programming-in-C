#include <stdio.h>
#include <math.h>

int main()
{
  int A, B, C;
  float s, area;

  printf("Enter the sides of Triangle (A, B, C): ");
  scanf("%d%d%d", &A, &B, &C);

  if(A<0 || B<0 || C<0 || (A+B<=C) || (B+C<=A) || (C+A<=B))
    printf("\nThe area of the Triangle is: Not Possible");
  else
  {
    //finding semi-perimeter
    s=(A+B+C)/2;
    //finding area
    area=sqrt(s*(s-A)*(s-B)*(s-C));

    printf("\nThe area of the Triangle is: %.2f",area);
  }

  return 0;
}