//C program to calculate the frequency of g
#include <stdio.h>

int freq(int n)
{
  int c=0;
  char str;

  printf("Enter the string: \n");
  for(int i=1; i<=n*2; ++i)
  {
    scanf("%c", &str);
    if(str=='g' || str=='G')
      c+=1;
  }
  return c;
}

int main()
{
  int n;

  printf("Enter the number of letters: ");
  scanf("%d",&n);

  printf("Frequency of letter (G or g): %d", freq(n));

  return 0;
}