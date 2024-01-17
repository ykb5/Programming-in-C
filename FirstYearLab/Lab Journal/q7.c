#include <stdio.h>
int main()
{
  int year;

  printf("Enter the Year: ");
  scanf("%d", &year);

  //uisng conditional operator
  if(year%100==0 && year%400==0 || year%100!=0 && year%4==0)
    printf("\nThe inputted Year (%d) is a Leap Year",year);
  else
    printf("\nThe inputted Year (%d) is not a Leap Year",year);

  return 0;
}