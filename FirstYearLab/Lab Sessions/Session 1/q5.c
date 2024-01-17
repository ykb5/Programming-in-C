//Swapping without using a third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter a and b respectively: ");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a=%d , b=%d.\n", a, b);
    return 0;
}