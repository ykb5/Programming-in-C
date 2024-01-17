/*
Name: Yogesh Kumar Bhatt
Section: F
Roll No: 63

6. Develop a program to convert and display a number from base 10 to base 16 using arrays.
*/
#include <stdio.h>
int main()
{
  int i=1, j, temp;
  long int dec, rem, quot;
  char hexa[100];

  printf("Yogesh Kumar Bhatt");
  printf("\nEnter the decimal number: ");
  scanf("%ld", &dec);
  quot=dec;
  while(quot!=0)
  {
    temp=quot%16;
    if(temp<10)
        temp+=48;
    else
        temp+=55;
    hexa[i++]=temp;
    quot/=16;
  }
  printf("Hexadecimal equivalent of given decimal number %ld is: ", dec);
  for(j=i-1; j>0; j--)
    printf("%c", hexa[j]);
    
  return 0;
}