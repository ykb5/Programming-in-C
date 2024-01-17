#include <stdio.h>

int main()
{
    printf("\nYogesh Kumar Bhatt\n");
    int n, i, j, c, d = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] != -1)
            {
                if (a[i] == a[j])
                    c++;
            }
        }
        if (c == 1)
            d++;
        if (d == 2)
        {
            printf("\nSecond non-repeating element is: %d\n", a[i]);
            break;
        }
    }
    return 0;
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