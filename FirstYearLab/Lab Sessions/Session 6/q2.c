//To accept a three digit positive number and then find the sum of the cubes of its individual digits. Then compare that resultant number with the original number, if it's equal then display "It's Armstrong Number" otherwise not. Using only conditional statements.
#include <stdio.h>
int main()
{
    int num, arm=0, temp;
    scanf("%d", &num);
    for(int i=num; i!=0; i=i/10)
    {
        temp=i%10;
        arm=arm+(temp*temp*temp);
    }
    if(num==arm)
        printf("Its Armstrong Number\n");
    else
        printf("It's not an Armstrong Number\n");
    
    return 0;
}

//If we want to make it only for three digit numbers then we will add an condition that if(num%1000!=0) then the number is not three digits...