#include <stdio.h>
int main()
{
    int n1, n2, a, b;
    printf("Enter the number of elemntes in Array1 and Array2: ");
    scanf("%d %d", &n1, &n2);
    if(n1>n2)
    {
        a=n1;
        b=n1-n2;
    }
    else
    {
        a=n2;
        b=n2-n1;
    }
    int arr1[n1], arr2[n2], arrs[a], i;
    printf("\nEnter the elements of Array1: ");
    for(i=0; i<n1; i++)
        scanf("%d", &arr1[i]);
    printf("\nEnter the elements of Array2: ");
    for(i=0; i<n2; i++)
        scanf("%d", &arr2[i]);
    for(i=0; i<a; i++)
    {
        if(i<a-b)
            arrs[i]=arr1[i]+arr2[i];
        if(i>=a-b)
        {
            if(n1>n2)
                arrs[i]=arr1[i];
            if(n2>n1)
                arrs[i]=arr2[i];
        }
    }
    printf("Sum: ");
    for(i=0; i<a; i++)
        printf("%d ", arrs[i]);

    return 0;
}