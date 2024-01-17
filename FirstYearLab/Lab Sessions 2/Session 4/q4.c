/*
*Yogesh Kumar Bhatt 20011189 F
*C program to find the median and range of the set of observations
*/
#include<stdio.h>
#include<limits.h>
float median(int x[],int n)
{
    float mean,median;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
               int temp=x[j];
               x[j]=x[i];
               x[i]=temp;
            }
        }
    }
    if(n%2!=0)
    {
        int p=n/2;
        median=x[p];
    }
    else
    {
        int m=(n-1)/2;
        median=(float)(x[m]+x[m+1])/2;
    }
    return median;
}
float range(int x[],int n)
{
    float range;
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(min>x[i])
        min=x[i];
        if(max<x[i])
        max=x[i];
    }
    range=max-min;
    return range;
}

int main()
{
    int n,i,j;
    float m,r;
    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the number of values: ");
    scanf("%d",&n);
    int a[n];

    printf("\nEnter the observations  : ");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    
    m=median(a,n);
    printf("\nThe median is: %.2f",m);
    r=range(a,n);
    printf("\nThe range is: %.2f",r);
    return 0;
}