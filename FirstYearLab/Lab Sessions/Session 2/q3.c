//Division by integer and float variables.
#include <stdio.h>
int main()
{
    int a, b, i;
    float f;
    printf("\nEnter the two integers: ");
    scanf("%d %d", &a, &b);
    i=a/b;
    f=a/b;
    printf("\na / b = %d (integer variable)", i);
    printf("\na / b = %f (float variable)\n", f);
    return 0;
}