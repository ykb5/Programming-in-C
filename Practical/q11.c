#include <stdio.h>
#include <ctype.h>
#define max 20

void Push(int stack[], int *top, int item)
{
    *top = *top + 1;
    stack[*top] = item;
}
int Pop(int stack[], int *top)
{
    int item = stack[*top];
    *top = *top - 1;
    stack[*top];
    return item;
}
void Eval_Postfix(int stack[], char exp[], int *top)
{
    int a, b, total;
    char *e;
    e = exp;

    while (*e != '\0')
    {
        total = 0;

        if (isdigit(*e))
        {

            Push(stack, top, *e - '0');
        }
        else if (*e == '+' || *e == '-' || *e == '*' || *e == '/')
        {
            b = Pop(stack, top);
            a = Pop(stack, top);

            switch (*e)
            {
            case '+':
                total = a + b;
                break;

            case '-':
                total = a - b;
                break;

            case '*':
                total = a * b;
                break;

            case '/':
                total = a / b;
                break;
            }
            Push(stack, top, total);
        }
        e++;
    }
    printf("The result is: %d", Pop(stack, top));
}

int main()
{
    printf("\nYogesh Kumar Bhatt\n");
    int stack[max], top = -1;
    char exp[max];
    printf("Enter the expression: ");
    scanf("%s", exp);
    printf("\n");

    Eval_Postfix(stack, exp, &top);
    return 0;
}