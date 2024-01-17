#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct pirority
{
    int data;
    int priority;
} pq[MAX];

void insert(int ele, int *rear)
{
    int priority;
    if (*rear == MAX - 1)
    {
        printf("Queue is full\n");
        exit(0);
    }
    printf("Enter the priority of element: ");
    scanf("%d", &priority);
    *rear = *rear + 1;
    pq[*rear].data = ele;
    pq[*rear].priority = priority;
}
int gethspy(int *rear)
{
    int p = -1;
    if (*rear == -1)
    {
        printf("Queue is empty\n");
        exit(0);
    }
    for (int i = 0; i <= *rear; i++)
    {
        if (pq[i].priority > p)
            p = pq[i].priority;
    }
    return p;
}
int delhspy(int *rear)
{
    int p, ele, i, j;
    p = gethspy(rear);
    for (i = 0; i <= *rear; i++)
    {
        if (pq[i].priority == p)
        {
            ele = pq[i].data;
            break;
        }
    }
    if (i < *rear)
    {
        for (j = 0; j < *rear; j++)
        {
            pq[j].data = pq[j + 1].data;
            pq[j].priority = pq[j + 1].priority;
        }
    }
    *rear = *rear + 1;
    return ele;
}
void display(int *rear)
{
    int *temp = rear;
    if (*temp == -1)
    {
        printf("Queue is empty\n");
        exit(0);
    }
    for (int i = 0; i <= *temp; i++)
    {
        printf("|| ele=%d priority=%d ||\n", pq[i].data, pq[i].priority);
    }
}

int main()
{
    printf("\nYogesh Kumar Bhatt\n");
    int rear = -1;
    int choice, n, p, ele;
    do
    {
        printf("\nMenu:\n1. Insert\n2. Get highest priority\n3. Delete highest priority\n4. Display\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &n);
            insert(n, &rear);
            break;
        case 2:
            p = gethspy(&rear);
            printf("Highest priority is %d\n", p);
            break;
        case 3:
            ele = delhspy(&rear);
            printf("Deleted priority element is %d\n", ele);
            break;
        case 4:
            display(&rear);
            break;
        case 5:
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}