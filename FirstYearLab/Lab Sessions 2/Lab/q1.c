#include <stdio.h>
int main()
{
    printf("Yogesh Kumar Bhatt");
    int arr[20], i;
    FILE *fptr1, *fptr2;
    fptr1=fopen("Numbers.txt", "w");
    fptr2=fopen("prime.txt", "w");

    printf("\nEnter 20 integers: ");
    for(i=0; i<20; i++)
    {
        scanf("%d", &arr[i]);
        fprintf(fptr1, "%d ", arr[i]);
    }
    fclose(fptr1);
    fptr1=fopen("Numbers.txt","r");
    for(i=0;i<20;i++)
    {
        if(prime(arr[i]))
            fprintf(fptr2, "%d ", arr[i]);
        getchar();
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
int prime(int num)
{
    int i;
    if (num < 0)
        return 0;

    for( i=2; i<=num/2; i++ )
    {
        if(num%i == 0)
            return 0;
    }
    return 1;
}