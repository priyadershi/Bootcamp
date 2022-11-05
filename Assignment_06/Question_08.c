//8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
        if(n % i == 0)
        {
            printf("Non-Prime Number");
            break;
        }
    if(i == n)
        printf("Prime Number");
    
    return 0;
}