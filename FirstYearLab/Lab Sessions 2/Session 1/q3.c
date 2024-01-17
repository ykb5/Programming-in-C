/*
Name: Yogesh Kumar Bhatt
Section: F
Roll No: 63

3. Develop a program to count numbers greater than, less than or equal to a number ‘K’ in an array by accepting the value of K from the user.
*/
#include <stdio.h>
int main()
{
  int N, i, K, big=0, small=0, equal=0;
  
  printf("Yogesh Kumar Bhatt");
  printf("\nEnter the number of elements: ");
  scanf("%d", &N);
  int arr[N];

  printf("\nEnter the elements of the array: ");
  for(i=0; i<N; i++)
  {
      scanf("%d", &arr[i]);
  }
  printf("\nEnter the number to be compared: ");
  scanf("%d", &K);

  for(i=0; i<N; i++)
  {
    if(arr[i]<K)
        small++;
    else if(arr[i]>K)
        big++;
    else
        equal++;
  }
  printf("\nThe count of numbers greater than %d are: %d", K, big);
  printf("\nThe count of numbers less than %d are: %d", K, small);
  printf("\nThe count of numbers equal to %d are: %d", K, equal);
  
  return 0;
}