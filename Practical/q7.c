#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;

void insert(node **top, int value, int *sizeRef)
{
    *sizeRef = *sizeRef + 1;
    node *temp = (node *)malloc(sizeof(node));
    temp->data = value;
    temp->next = *top;
    *top = temp;
}
void display(node *top)
{
    node *temp;
    temp = top;
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void delete (node **top, int *sizeRef)
{
    if (top == NULL)
        return;

    *sizeRef = *sizeRef - 1;
    node *temp = *top;
    printf("%d deleted successfully\n", temp->data);
    *top = temp->next;
    free(temp);
}

int main()
{

    printf("\nYogesh Kumar Bhatt\n");
    node *top;
    int count = 0, n, choice, value, pos, sizeRef = -1;

    top = NULL;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    while (count == 0)
    {

        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (sizeRef == n - 1)
            {
                printf("Stack is Full\n");
            }
            else
            {
                printf("Enter a value : ");
                scanf("%d", &value);
                insert(&top, value, &sizeRef);
            }
            break;

        case 2:
            if (sizeRef == -1)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                delete (&top, &sizeRef);
            }
            break;

        case 3:
            display(top);
            break;

        case 4:
            count++;
            break;

        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}