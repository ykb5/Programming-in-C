//C program to print a pattern
#include <stdio.h>
int main()
{
  int row, i, j;
  printf("Enter the Number of rows: ");
  scanf("%d",&row);

  printf("The Corresponding Pattern is\n");
  for (i=1; i<=row; ++i)
  {
      for (j=i; j<row; ++j)
      {
          printf(" ");
      }
      for(j=1; j<=i; ++j)
      {
          printf("*");
      }
      printf("\n");
  }

  return 0;
}