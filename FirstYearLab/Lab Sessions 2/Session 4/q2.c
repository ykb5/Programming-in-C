/*
*Yogesh Kumar Bhatt 20011189 F
*C program to find the frequency Count of array elements
*/
#include <stdio.h>
int read_Array(int *x, int *y, int n);
int count_Array(int *x, int *y, int n);
int print_Array(int *x, int *y, int n);
int i,j;

int main()
{
    int n;
    printf("Yogesh Kumar Bhatt");
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];

    read_Array(arr1,arr2,n);
    count_Array(arr1,arr2,n);
    print_Array(arr1,arr2,n);

    return 0;
}

int read_Array(int *x, int * y, int n)
{
    printf("\nEnter the elements of Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        y[i]=-1;
    }
}
int count_Array(int *x, int *y, int n)
{
    for(i=0;i<n;i++)
    {
        int c=1;
        for(j=i+1;j<n;j++)
        {
            if(x[i]==x[j])
            {
                c++;
                y[j]=0;
            }
        }
        if(y[i] != 0 )
            y[i]=c;
    }
}
int print_Array(int *x, int *y, int n)
{
    for(i=0;i<n;i++)
    {
        if(y[i]!=0)
            printf("\nFrequency of %d is %d \n",x[i],y[i]);
    }
}