/*
Name: Yogesh Kumar Bhatt
Section: F
Roll No: 63

4. Develop a program to find sum of two equal and unequal size arrays into third array.
*/
#include <stdio.h>
int main()
{
  int N, M, i;
  printf("Yogesh Kumar Bhatt");
  printf("\nEnter number of elements of both arrays: ");
  scanf("%d%d", &M, &N);

  int arr1[M], arr2[N];
  for(i=0; i<M+N; i++)
  {
    arr1[i]=0;
    arr2[i]=0;
  }
  printf("\nEnter elements of array 1: ");
  for(i=0; i<M; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("\nEnter elements of array 2: ");
  for(i=0; i<N; i++)
  {
    scanf("%d", &arr2[i]);
  }
  int grt = N > M ? N : M;
  int arx[grt];
  for (i=0; i<grt; i++)
  {
    arx[i] = arr1[i] + arr2[i];
  }
  printf("The sum is : ");
  for (i=0; i<grt; i++)
  {
    printf("%d ", arx[i]);
  }
  return 0;
}