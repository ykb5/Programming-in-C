#include <stdio.h>
#define size 5

void Enqueue(int queue[], int *front, int *rear)
{
    int value;
    if (*rear == size - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        printf("Enter a value\n");
        scanf("%d", &value);
        if (*front == -1)
        {
            *front = *front + 1;
        }
        *rear = *rear + 1;
        queue[*rear] = value;
        printf("%d entered successfully\n", value);
    }
}
void Dequeue(int queue[], int *front, int *rear)
{
    if (*front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("%d deleted successfully\n", queue[*front]);
        *front = *front + 1;
        if (*front > *rear)
        {
            *front = *rear = -1;
        }
    }
}
void Display(int queue[], int *front, int *rear)
{
    if (*front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue is: ");
        for (int i = *front; i <= *rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    printf("\nYogesh Kumar Bhatt\n");
    int queue[size], front = -1, rear = -1;
    int counter = 0, choice;
    while (counter == 0)
    {
        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Enqueue(queue, &front, &rear);
            break;

        case 2:
            Dequeue(queue, &front, &rear);
            break;

        case 3:
            Display(queue, &front, &rear);
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