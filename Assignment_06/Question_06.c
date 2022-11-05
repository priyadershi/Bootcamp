//6. Write a program to calculate factorial of a number

#include<stdio.h>

int main()
{
    int n,sum=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n>1)
        for(int i=1;i<=n;i++)
            sum *= i;
    printf("%d",sum);

    
    
    return 0;
}