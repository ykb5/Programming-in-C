/*
*Yogesh Kumar Bhatt 20011189 F
*C program to find second largest number using Dynamic Memory Allocation
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*p, i, j;
    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the number of element: ");
    scanf("%d", &n);
    int a[n];
    p=(int*)malloc(n*sizeof(int));
    int max=p[n];
    int smax=p[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",p+i);
    }
    for(i=0; i<n; i++)
    {
        if(max<*(p+i))
        {
            smax=max;
            max=*(p+i);
        }
        else if (*(p+i) > smax && *(p+i)< max)
        {
            smax=*(p+i);
        }
    }
    printf("\nSecond largest number is %d", smax);
}   