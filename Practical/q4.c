#include <stdio.h>
#include <stdlib.h>

int insert(int *arr, int top, int n)
{
    if (top == n - 1)
    {
        printf("\nStack is full!\n");
    }
    else
    {
        int num;
        printf("\nEnter the value: ");
        scanf("%d", &num);
        top++;
        arr = (int *)realloc(arr, sizeof(int) * (top + 1));
        arr[top] = num;

        printf("\n%d added successfully!\n", arr[top]);

        return top;
    }
}
int delete (int *arr, int top)
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {

        printf("\n%d deleted successfully", arr[top]);

        top--;
        arr = (int *)realloc(arr, sizeof(int) * (top + 1));
        return top;
    }
}

void display(int *arr, int top)
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack is: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    printf("\nYogesh Kumar Bhatt\n");
    int *stack, top = -1, count = 0, choice, n;
    stack = (int *)malloc(sizeof(int) * (top + 1));

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    while (count == 0)
    {

        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            top = insert(stack, top, n);
            break;

        case 2:
            top = delete (stack, top);
            break;

        case 3:
            display(stack, top);
            break;

        case 4:
            count++;
            break;

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}