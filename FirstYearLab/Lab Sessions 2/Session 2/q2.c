#include <stdio.h>
int main()
{
  int n, pdia=0, sdia=0, i, j;
  printf("Yogesh Kumar Bhatt");
  printf("\nEnter the size of square matrix: ");
  scanf("%d", &n);
  int arr[n][n];

  for (i=0; i<n; ++i)
  {
      for (j=0; j<n; ++j)
      {
          printf("\nEnter element a%d%d of matrix: ", i+1, j+1);
          scanf("%d", &arr[i][j]);
          if(i==j)
            pdia+=arr[i][j];
          if(i+j==n-1)
            sdia+=arr[i][j];
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
  printf("\nSum of Principal diagonal: %d", pdia);
  printf("\nSum of Secondary diagonal: %d", sdia);
  return 0;
}