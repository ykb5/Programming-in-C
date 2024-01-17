#include <stdio.h>
int main()
{
  int r, c, i, j;
  printf("Yogesh Kumar Bhatt");
  printf("\nEnter rows and columns respectively: ");
  scanf("%d %d", &r, &c);
  int arr[r][c], arrt[c][r];

  for (i=0; i<r; ++i)
  {
      for (j=0; j<c; ++j)
      {
          printf("\nEnter element a%d%d of matrix: ", i+1, j+1);
          scanf("%d", &arr[i][j]);
      }
  }
  
  printf("\nThe entered matrix is:\n");
  for (i=0; i<r; ++i)
  {
      for (j=0; j<c; ++j)
      {
          printf("%d ", arr[i][j]);
          if(j==c-1)
            printf("\n");
      }
  }
  
  for (i=0; i<r; ++i)
  {
      for (j=0; j<c; ++j)
      {
          arrt[j][i]=arr[i][j];
      }
  }
  
  printf("\nTranspose of the matrix is:\n");
  for (i=0; i<c; ++i)
  {
      for (j=0; j<r; ++j)
      {
          printf("%d ", arrt[i][j]);
          if (j==r-1)
            printf("\n");
      }
  }
  return 0;
}