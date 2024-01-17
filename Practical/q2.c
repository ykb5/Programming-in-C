#include <stdio.h>

void third_repeating(int *arr, int n)
{
    int c1, c2 = 0, i, j;
    for (i = 0; i < n; i++)
    {
        c1 = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] != -1 && i != j)
            {
                if (arr[i] == arr[j] && i != j)
                {
                    c1++;
                    arr[j] = -1;
                }
            }
        }
        if (c1 > 0)
            c2++;

        if (c2 == 3)
        {
            break;
        }
    }

    if (c2 == 3)
        printf("\nThird repeating element is %d", arr[i]);
    else
        printf("\nThird repeating element not found");

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

    third_repeating(arr, n);

    return 0;
}