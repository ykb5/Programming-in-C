#include <stdio.h>

void swap (int*var1,int*var2)
{
  *var1 = *var1 + *var2;
  *var2 = *var1 - *var2;
  *var1 = *var1 - *var2;
}

int main()
{
  int var1,var2;
  printf("Enter Var1 and Var2 respectively: ");
  scanf("%d %d", &var1, &var2);

  swap(&var1,&var2);
  printf("\nSwapped values: Var1 = %d and Var2 = %d", var1, var2);

  return 0;
}