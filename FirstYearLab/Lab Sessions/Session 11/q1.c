//To design a function BIG that accepts two parameters and returns the biggest of two. C pragram to accept four numbers in the main program and display the biggest of four numbers in the calling program.
#include <stdio.h>
int BIG(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a, b, c, d, b1, b2;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", BIG(BIG(a, b), BIG(c, d)));

    return 0;
}