//To accept only positive numbers and print the multiples of 3 and 7.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n<0)
        return 0;
    for(int i=2; i<=n; i++)
        if(i%3==0 && i%7==0)
            printf("%d ", i);
    
    return 0;
}
/*
*Another way that this question could be asked was,
*to check whether if the number entered is multiple of 3 and 7 or not.
*In that case instead of implementing the loop we can directly check for the condition...
*/