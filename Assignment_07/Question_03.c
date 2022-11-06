//3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
    int n,a=0,b=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    while(b <= n)
    {
        a += b;
        b = a - b;
        a = a - b;
        b = a + b;
        if(b == n)
            break;
    }

    if(b == n || n == 0)
        printf("%d is in the Fibonacci Series",n);
    else
        printf("Not in the fibonacci series");

}