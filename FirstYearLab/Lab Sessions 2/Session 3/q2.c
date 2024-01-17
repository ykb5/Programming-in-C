//Yogesh Kumar Bhatt
//20011189
#include <stdio.h>
#define N 5
int main()
{
    int arr[N] = {10, 20, 30, 40, 50};
    int *ptr1, *ptr2, i;

    ptr1 = &arr[0];
    ptr2 = &arr[0];

    printf("Yogesh Kumar Bhatt");
    printf("\n(a) Elements of array using Increment/Decrement of pointer: ");
    for (i=0; i<N; i++)
    {
        printf("\narr[%d] = %d", i, *ptr1);
        ptr1++;
    }
    
    printf("\n(b) Elements of array using Addition/Subtraction of integer to a pointer: ");
    for (i=0; i<N; i++)
    {
        printf("\narr[%d] = %d", i, *(ptr2 + i));
    }
    return 0;
}