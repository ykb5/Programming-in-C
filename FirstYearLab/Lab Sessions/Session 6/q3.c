//To accept a three digit number and display it by reversing it. Then, check if it is a palindrome. Using only conditional statements.
#include <stdio.h>
int main()
{
    int num, rev, temp;
    scanf("%d", &num);
    for(int i=num; i!=0; i=i/10)
    {
        temp=i%10;
        rev=rev*10+temp;
    }
    printf("Original number: %d, Reversed number: %d\n", num, rev);

    if(num==rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}