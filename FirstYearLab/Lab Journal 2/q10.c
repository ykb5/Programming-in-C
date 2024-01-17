#include <stdio.h>
#include <math.h>
void read_array(int a[],int n)
{
    int i;
    printf("\nArray elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}
float mean(int a[],int n)
{
    int i;
    float sum=0;
    for(i=0; i<n; i++)
        sum=sum+*(a+i);
    return((float)sum/n);
}
float std_deviation(int a[],int n,float m)
{
    int i;
    float sd, sum=0;
    for(i=0; i<n; i++)
        sum=sum+pow((*(a+i)-m),2);
    sd=(sqrt(sum/n));
    return sd;
}
int main()
{
    int i, n;
    float m, s;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    read_array(a,n);
    m=mean(a,n);
    printf("\nMean is: %.2f",m);
    s=std_deviation(a,n,m);
    printf("\nStandard deviation: %.2f",s);

    return 0;
}