#include <stdio.h>
#include <stdlib.h>
#define max 5
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;

void insert(node **top, int *front, int *rear, int value)
{
    if (*front == -1)
        *front = *front + 1;

    node *temp = (node *)malloc(sizeof(node));
    temp->data = value;
    if (*top == NULL)
    {
        temp->next = *top;
        *top = temp;
    }
    else
    {
        node *temp2 = *top;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
        temp->next = NULL;
    }
    *rear = *rear + 1;
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
void delete (node **top, int *front, int *rear)
{
    if (top == NULL)
        return;

    *front = *front + 1;
    node *temp = *top;
    printf("%d deleted successfully\n", temp->data);
    *top = temp->next;
    free(temp);
    if (*front > *rear)
        *front = *rear = -1;
}

int main()
{

    printf("\nYogesh Kumar Bhatt\n");
    node *top;
    int counter = 0, choice, value, pos, front = -1, rear = -1;

    top = NULL;
    while (counter == 0)
    {

        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (rear == max - 1)
            {
                printf("Queue is Full\n");
            }
            else
            {
                printf("Enter a value : ");
                scanf("%d", &value);
                insert(&top, &front, &rear, value);
            }
            break;

        case 2:
            if (front == -1)
            {
                printf("Queue is Empty\n");
            }
            else
            {
                delete (&top, &front, &rear);
            }
            break;

        case 3:
            display(top);
            break;

        case 4:
            counter++;
            break;

        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}