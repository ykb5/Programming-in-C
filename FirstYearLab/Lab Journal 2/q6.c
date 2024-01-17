#include <stdio.h>
int main()
{
  int n, upt, i, j;
  printf("Enter number of rows or columns: ");
  scanf("%d", &n);
  int arr[n][n];

  for (i=0; i<n; ++i)
  {
      for (j=0; j<n; ++j)
      {
          printf("\nEnter element a%d%d of matrix: ", i+1, j+1);
          scanf("%d", &arr[i][j]);
      }
  }
  
  printf("\nThe entered matrix is:\n");
  for (i=0; i<n; ++i)
  {
      for (j=0; j<n; ++j)
      {
          printf("%d ", arr[i][j]);
          if(j==n-1)
            printf("\n");
      }
  }
  
  upt=1;
  for(i=0; i<n; i++)
  {
      for(j=0; j<n; j++)
      {
          if(j<i && arr[i][j]!=0)
            upt=0;
          else
            upt=1;
      }
  }
  if(upt==1)
    printf("\nMatrix A is upper triangular matrix.");
  else
    printf("\nMatrix A is not upper triangular matrix.");
  return 0;
}