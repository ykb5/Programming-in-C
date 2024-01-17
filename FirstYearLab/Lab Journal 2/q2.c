#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int K, great=0, less=0, equal=0;
    printf("\nEnter the value of K: ");
    scanf("%d", &K);
    for(i=0; i<n; i++)
    {
        if(arr[i]==K)
            equal++;
        else if(arr[i]>K)
            great++;
        else
            less++;
    }
    printf("\nThe count of numbers greater than %d is: %d", K, great);
    printf("\nThe count of numbers less than %d is: %d", K, less);
    printf("\nThe count of numbers equal to %d is: %d", K, equal);

    return 0;
}