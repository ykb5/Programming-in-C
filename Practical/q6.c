#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
typedef struct Node node;

void insertAtRightSide(node **head, int value)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->val = value;
    if (*head == NULL)
    {
        temp->next = *head;
        *head = temp;
    }
    else
    {
        node *temp2 = *head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
        temp->next = NULL;
    }
}
void display(node *head)
{
    node *temp;
    temp = head;
    printf("List is : ");
    while (temp != NULL)
    {
        printf(" %d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}
void deleteAtAlternate(node *head)
{
    if (head == NULL)
        return;

    node *temp = head->next;
    if (temp == NULL)
        return;

    head->next = temp->next;
    free(temp);
    deleteAtAlternate(head->next);
}

int main()
{
    printf("\nYogesh Kumar Bhatt\n");
    node *head;
    int count = 0, choice, value, pos;

    head = NULL;
    while (count == 0)
    {
        printf("\nMenu:\n1. Insert At Right \n2. Delete Alternate nodes\n3. Display\n4.Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a value : ");
            scanf("%d", &value);
            insertAtRightSide(&head, value);
            break;

        case 2:
            deleteAtAlternate(head);
            display(head);
            break;

        case 3:
            display(head);
            break;

        case 4:
            count++;
            break;

        default:
            printf("Invalid Choice.\n");
            break;
        }
    }

    return 0;
}