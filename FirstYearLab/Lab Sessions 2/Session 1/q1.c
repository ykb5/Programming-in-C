/*
Name: Yogesh Kumar Bhatt
Section: F
Roll No: 63

1. Develop a program to find the sum and average of given N elements in an array.
*/
#include <stdio.h>
int main()
{
    int i, N;
    float sum, avg;

    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the value of N: ");
    scanf("%d", &N);

    int arr[N];
    printf("\nEnter %d numbers: ",N);
    
    for (i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<N; i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/N;

    printf("\nSum of all numbers = %.2f\n",sum);
    printf("\nAverage of all input numbers = %.2f",avg);
    
    return 0;
}