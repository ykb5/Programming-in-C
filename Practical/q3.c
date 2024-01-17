#include <stdio.h>
#include <stdlib.h>

void input();
void reverse(int *, int, int);
void print(int *, int);

int main()
{
    printf("\nYogesh Kumar Bhatt\n");
    input();
    return 0;
}
void input()
{
    int num, i = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int *arr = (int *)malloc(sizeof(int) * num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter the element %d:", (i + 1));
        scanf("%d", &arr[i]);
    }
    reverse(arr, 0, num - 1);
    print(arr, num);
}
void reverse(int *arr, int start, int end)
{
    int store;
    if (start >= end)
        return;
    store = arr[start];
    arr[start] = arr[end];
    arr[end] = store;
    reverse(arr, start + 1, end - 1);
}
void print(int *arr, int num)
{
    printf("After reversing elements are: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}

/*
#include <stdio.h>

void sec_non_repeating(int *arr, int n)
{
    int rc, nrc = 0;
    for (int i = 0; i < n; i++)
    {
        rc = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] != -1 && arr[i] == arr[j])
                rc++;

            if (rc == 1)
                nrc++;

            if (nrc == 2)
            {
                printf("\nSecond non-repeating element is: %d\n", arr[i]);
                break;
            }
        }
    }
    return;
}

int main()
{
    int n;
    printf("\nYogesh Kumar Bhatt\n");
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sec_non_repeating(arr, n);

    return 0;
}
*/