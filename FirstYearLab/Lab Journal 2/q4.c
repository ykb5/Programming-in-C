#include <stdio.h>
int main()
{
  int N, i, K, pos;
  char ch;
  printf("Enter number of elements: ");
  scanf("%d", &N);
  int arr1[N], arr2[N+1];

  printf("\nEnter elements: ");
  for(i=0; i<N; i++)
  {
      scanf("%d", &arr1[i]);
  }
  printf("Enter value of K: ");
  scanf("%d", &K);
  printf("\nEnter 1 for adding element in first position.");
  printf("\nEnter 2 for adding element in last position.");
  printf("\nEnter 3 for adding element at particular position.\n");
  scanf("%d", &ch);
  switch (ch)
  {
      case 1:
      for (i=0; i<N; i++)
      {
          arr2[i+1]=arr1[i];
      }
      arr2[0]=K;
      break;
      
      case 2:
      for (i=0; i<N; i++)
      {
          arr2[i]=arr1[i];
      }
      arr2[i]=K;
      break;
      
      case 3:
      printf("\nEnter position: ");
      scanf("%d", &pos);
      for (i=0; i<pos-1; i++)
      {
          arr2[i]=arr1[i];
      }
      arr2[i]=K;
      for (i=pos; i<=N; i++)
      {
          arr2[i]=arr1[i-1];
      }
      break;
      default:
      printf("\nError");
  }
  printf("The new array is: ");
  for (i=0; i<=N; i++)
  {
      printf("%d ", arr2[i]);
  }
  return 0;
}