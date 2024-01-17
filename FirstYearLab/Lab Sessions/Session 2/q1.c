#include <stdio.h>
int main()
{
    int l=20, b=15;
    printf("\nRectangular plot of length %dm and breadth %dm will require %dm of wire.", l, b, 2*(l+b));
    printf("\nThe total cost of fencing is: %d\n", 400*(2*(l+b)));
    return 0;
}