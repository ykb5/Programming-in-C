#include <stdio.h>
int main()
{
  int r, c, i, j, large;
  printf("Yogesh Kumar Bhatt");
  printf("\nEnter rows and columns respectively: ");
  scanf("%d %d", &r, &c);
  int arr[r][c];

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
  large = arr[0][0];
  for(i=0;i< r;i++)
  {
    for(j=0;j< c;j++)
    {
      if(arr[i][j]>large)
      {
        large = arr[i][j];
      }
    }
  }
  printf("\n%d is the biggest element of matrix.", large);
  return 0;
}