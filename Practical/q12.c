#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct node
{
    int val;
    struct node *next;
} node;

void InsertNode(node **head, int item)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->val = item;
    temp->next = NULL;
    if (*head == NULL)
        *head = temp;
    else
    {
        node *temp1 = *head;
        while (temp1->next)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}
void sortNode(node **head)
{
    node *temp = *head;
    int *arr = (int *)malloc(MAX * sizeof(int));
    int i = 0;
    while (temp)
    {
        arr[i++] = temp->val;
        temp = temp->next;
    }
    for (int l = 0; l < i; l++)
    {
        for (int j = l + 1; j < i; j++)
        {
            if (arr[l] > arr[j])
            {
                int temp = arr[l];
                arr[l] = arr[j];
                arr[j] = temp;
            }
        }
    }
    temp = *head;
    int in = 0;
    while (temp)
    {
        temp->val = arr[in];
        in++;
        temp = temp->next;
    }
}

int main()
{
    printf("\nYogesh Kumar Bhatt\n");
    node *head1 = NULL;
    node *head2 = NULL;
    node **temp1 = &head1, **temp2 = &head2;
    for (int i = 0; i < 2; i++)
    {
        int choice = 0;
        printf("Enter the numbers for %d list\n", i + 1);
        while (choice == 0)
        {
            printf("Enter the value: ");
            int item;
            scanf("%d", &item);
            if (i == 0)
                InsertNode(temp1, item);
            else
                InsertNode(temp2, item);
            printf("Do you want to enter another number 0 - yes 1 - No\n");
            scanf("%d", &choice);
        }
    }
    sortNode(temp1);
    sortNode(temp2);
    node *temp3 = head1;
    temp3->next = head2;
    temp3 = head1;
    while (temp3)
    {
        printf("%d ", temp3->val);
        temp3 = temp3->next;
    }
}