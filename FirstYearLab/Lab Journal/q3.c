#include <stdio.h>
int main()
{
  int num, temp;
  
  printf("Enter the number: ");
  scanf("%d",&num);

  //using switch-case operator
  temp=num%2;
  switch(temp)
  {
      case 0:
      printf("The number (%d) is Even (Switch Case)\n", num);
      break;
      default:
      printf("The number (%d) is Odd (Switch Case)\n", num);
  }

  //using ternary operator
  (num%2==0)?printf("The number (%d) is Even (Ternary operator)", num):printf("The number (%d) is Odd (Ternary operator)", num);

  return 0;
}