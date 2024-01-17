#include <stdio.h>
int main()
{
    printf("Yogesh Kumar Bhatt");
    FILE *fptr1, *fptr2, *fptr3;
    int n, num, i;
    fptr1 = fopen("Numbers.txt", "w");
    if(fptr1 == NULL)
        return 0;
    
    printf("\nEnter the 20 integers: ");
    for (i = 0; i<20; i++)
    {
        scanf("%d", &n);
        fprintf(fptr1, "%d ", n);
    }
    fclose(fptr1);
    fptr1 = fopen("Numbers.txt", "r");
    fptr2 = fopen("odd.txt", "w");
    fptr3 = fopen("even.txt", "w");
    while(fscanf(fptr1, "%d", &num) != -1)
    {
        if(num%2==1)
            fprintf(fptr2, "%d ", num);
        else if(num%2==0)
            fprintf(fptr3, "%d ", num);
    }
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);

    return 0;
}