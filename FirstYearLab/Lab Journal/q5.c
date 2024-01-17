#include <stdio.h>
int main()
{
  int a, b, c, d, e, f, per;
  char grade;

  printf("Enter the marks in six subjects: ");
  scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
  //average of the six subjects
  per=(a+b+c+d+e+f)/6;
  //checking for the grade
  if(per>80)
    grade = 'A';
  else if(per>61)
    grade = 'B';
  else if(per>51)
    grade = 'C';
  else if(per>41)
    grade = 'D';
  else if(per>35)
    grade = 'E';
  else
    grade = 'F';

  printf("The Grade of the Student is: %c", grade);

  return 0;
}