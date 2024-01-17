#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;

void insert(node **last, int value)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = value;
    if (temp == NULL)
        temp->next = NULL;
    if (*last == NULL)
    {
        *last = temp;
        (*last)->next = temp;
    }
    else
    {
        temp->next = (*last)->next;
        (*last)->next = temp;
        *last = (*last)->next;
    }
    printf("Entered %d Sucessfully\n", value);
}
void display(node *last)
{
    node *head = last->next;
    while (head != last)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("%d \n", head->data);
}

int main()
{
    node *last;

    printf("\nYogesh Kumar Bhatt\n");
    int counter = 0, choice, value;

    last = NULL;
    while (counter == 0)
    {

        printf("\nMenu:\n1. Insert\n2. Display\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a value: ");
            scanf("%d", &value);
            insert(&last, value);
            break;

        case 2:
            display(last);
            break;

        case 3:
            counter++;
            break;

        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}