//Computing net salary.
#include <stdio.h>
int main()
{
    int bp;
    printf("\nEnter the Basic Pay: ");
    scanf("%d", &bp);

    printf("\nThe Net Salary is: %d", (bp+(bp*10/100)+(bp*5/100)+(bp*15/100)));
    return 0;
}