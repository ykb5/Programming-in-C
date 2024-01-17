/*
*Yogesh Kumar Bhatt 20011189 F
*C program to find the smallest element of a given matrix of order M x N
*/
#include <stdio.h> 
int read_Array(int *a, int n, int m);
int smallest(int *a, int m, int n);
int i, j;

int main()
{
   int n,m;
   printf("Yogesh Kumar Bhatt");
   printf("\nEnter the number of rows and columns respectively: ");
   scanf("%d %d", &n, &m);
   int a[n][m];

   read_Array((int *)a, n, m);
   smallest((int *)a, n, m);
   return 0;
}

int read_Array(int *a, int n, int m)
{
   printf("\nEnter the elements: ");
   for(i=0; i<n; i++)
      for( j=0; j<m; j++)
         scanf("%d",(a+i*m) + j);
}
int smallest(int *a, int n, int m)
{
   int small = *((a+0*m)+0);
   for( i=0; i<n; i++)
   {
      for(j=0; j<m; j++)
         if(*((a+i*m)+j) < small)
            small = *((a+i*m) + j);
   } 
   printf("\n%d is the smallest element of the matrix",small);
}