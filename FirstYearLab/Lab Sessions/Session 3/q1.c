//Find the area of a valid triangle using Heron's Formula.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float s, area;
    printf("\nEnter the sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if((a+b)>c || (b+c)>a || (a+c)>b)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("\nThe area of triangle is: %.2f", area);
    }
    else
        printf("\nThe triangle is Invalid.\n");
    return 0;
}