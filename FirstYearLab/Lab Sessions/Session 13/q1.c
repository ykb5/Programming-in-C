//Design a basic calculator.
#include <stdio.h>
int add(int a, int b)
{
    return (a+b);
}
int sub(int a, int b)
{
    return (a-b);
}
int multiply(int a, int b)
{
    return (a*b);
}
int division(int a, int b)
{
    return (a/b);
}

int main()
{
    int choice, a, b, result;
    while(1)
    {
        printf("\nMenu:\n1. Addition\n2. Subtraction\n3. Multiply\n4. Division\n0. Exit\nEnter the choice: ");
        scanf("%d", choice);

        switch(choice)
        {
            case 1:
                printf("Enter first number: ");
                scanf("%d %d", &a, &b);
                result = add(a, b);
                printf("\nThe result is: %d", result);
                break;
            case 0:
                printf("\nSuccessfully returned.");
                return 0;
        }
    }
}