#include <stdio.h>
int main()
{
  int num, temp, sum=0;

  printf("Enter the number: ");
  scanf("%d",&num);
  temp=num;
  //using while loop for finding the sum
  while(temp!=0)
  {
    sum=sum+temp%10;
    temp=temp/10;
  }
  printf("\nThe sum of digits of %d is: %d",num, sum);

  return 0;
}