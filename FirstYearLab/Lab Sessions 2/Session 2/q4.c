#include <stdio.h>
int main()
{
  int m, n, p, q, i, j, k, sum = 0;
  printf("Yogesh Kumar Bhatt");
  printf("\nEnter rows and columns of first matrix: ");
  scanf("%d%d", &m, &n);

  int a[m][n];
  for (i=0; i<m; ++i)
  {
      for (j=0; j<n; ++j)
      {
          printf("\nEnter element a%d%d of first matrix: ", i+1, j+1);
          scanf("%d", &a[i][j]);
      }
  }

  printf("\nEnter rows and columns of second matrix: ");
  scanf("%d%d", &p, &q);

  if (n != p)
    printf("\nThe multiplication is not possible.");
  else
  {
      int b[p][q], c[m][q];
      for (i=0; i<p; ++i)
      {
          for (j=0; j<q; ++j)
          {
              printf("\nEnter element b%d%d of second matrix: ", i+1, j+1);
              scanf("%d", &b[i][j]);
          }
      }
      for (i=0; i < m; i++)
      {
          for (j=0; j < q; j++)
          {
              for (k=0; k<p; k++)
              {
                  sum = sum + a[i][k]*b[k][j];
              }
              c[i][j] = sum;
              sum = 0;
          }
      }
      printf("Product of the matrices:\n");
      for (i=0; i<m; i++)
      {
          for (j=0; j<q; j++)
            printf("%d\t", c[i][j]);
          
          printf("\n");
      }
  }
  
  return 0;
}