#include<stdio.h>
int main()  
{
    int n, i, *small;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnter the elements: ");  
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    small = &arr[n - 1];
    
    for(i = 0; i < n - 1; i++)  
    {
        if( *(arr + i) < *small)
            *small = *(arr + i);
    }
  
    printf("\nSmallest element: %d", *small);
  
    return 0;
}