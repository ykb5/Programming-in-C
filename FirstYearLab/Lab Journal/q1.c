#include <stdio.h>
int main()
{
  int P, L, B, T, wire, cost;

  printf("Enter the number of rounds (P):\n");
  scanf("%d",&P);
  printf("Enter the length and breadth of the plot (L & B):\n");
  scanf("%d %d", &L, &B);
  printf("Enter the cost of fencing (T):\n");
  scanf("%d",&T);
  
  //Total wire to be purchased
  wire=2*(L+B)*P;
  //Total cost of fencing
  cost=wire*T;

  printf("Total wire to be purchased (in Meter):%d\n",wire);
  printf("Total Cost of Fencing (in Rs): %d",cost);

  return 0;
}