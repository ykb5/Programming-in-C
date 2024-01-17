#include <stdio.h>

int main()
{
    printf("Yogesh Kumar Bhatt");
    int arr[50], i;

    FILE *fptr = fopen("Numbers.txt", "r");
    for (i = 0; i <= 25; i++)
        fscanf(fptr, "%d", &arr[i]);

    printf("\n");
    for (i = 0; i <= 25; i++)
        if (arr[i] % 7 == 0)
            printf("%d ", arr[i]);
    
    return 0;
}