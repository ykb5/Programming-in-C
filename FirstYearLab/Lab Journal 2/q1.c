#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements:  ");
	scanf("%d", &n);
	int arr[n], sum=0;
	printf("\nEnter the elements: ");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		sum=sum+arr[i];
	}
	printf("\nThe total sum is: %d", sum);
	printf("\nAnd. the average is: %.2f", (float)sum/n);
	return 0;
}