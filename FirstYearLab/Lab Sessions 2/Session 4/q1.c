/*
*Yogesh Kumar Bhatt 20011189 F
*C Program to Swap Numbers in Cyclic Order Using Call by Reference
*/
#include <stdio.h>
int swap(int *x, int *y, int *z);
int main()
{
    int a,b,c;

    printf("Yogesh Kumar Bhatt");
    printf("\nEnter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nValue before swapping:");
    printf("\na=%d \nb=%d \nc=%d", a, b, c);
    
    swap(&a,&b,&c);
    
    printf("\nValue after swapping:");
    printf("\na=%d \nb=%d \nc=%d", a, b, c);

    return 0;
}
int swap(int *x, int *y, int *z)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}