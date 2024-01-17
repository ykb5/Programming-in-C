#include <stdio.h>
int convert(int num, int base)
{
    int rem=num%base;
    if (num==0)
        return 0;
    convert (num/base, base);
    if(rem<10)
        printf("%d", rem);
    else
        printf("%c", rem-10+'A');
}

int main()
{
  int num;

  printf("Enter the Decimal Number (Base 10): ");
  scanf("%d",&num);

  printf("\nHexadecimal equivalent of %d is : ", num);
  convert(num,16);
  printf("\nBinary equivalent of %d is : ", num);
  convert(num,2);
  printf("\nOctal equivalent of %d is : ", num);
  convert(num,8);
}