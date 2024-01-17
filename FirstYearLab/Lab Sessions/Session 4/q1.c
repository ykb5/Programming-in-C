//To check whether a given number is even or add using three different methods: a) Using if-else, b) Using switch-case, c) Using conditional/ternary operator
#include <stdio.h>
void num_ifelse(int n)
{
    printf("Using if-else: ");
    if(n%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
    return;
}
void num_switch(int n)
{
    printf("Using switch-case: ");
    switch(n%2)
    {
        case 0:
            printf("Even\n");
            return;
        default:
            printf("Odd\n");
            return;
    }
}
void num_ternary(int n)
{
    printf("Using ternary operator: ");
    (n%2==0) ? printf("Even\n") : printf("Odd\n");
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    num_ifelse(n);
    num_switch(n);
    num_ternary(n);

    return 0;
}