/*
Name: Yogesh Kumar Bhatt
Section: F
Roll No: 63

2. Develop a program to find biggest and smallest element of an array with N elements.
*/
#include <stdio.h>
int main()
{
    int N, i, big, small;

    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the value of N: ");
    scanf("%d", &N);
    int arr[N];

    printf("\nEnter the array: ");
    for (i=0; i<N; ++i)
    {
        scanf("%d", &arr[i]);
    }
    big=small=arr[0];
    for (i=1; i<N; ++i)
    {
        if(arr[i]>big)
            big=arr[i];
        if(arr[i]<small)
            small=arr[i];
    }

    printf("\nThe biggest element of array is %d", big);
    printf("\nThe smallest element of array is %d", small);
    
    return 0;
}