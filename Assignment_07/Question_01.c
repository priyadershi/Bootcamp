//1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>

int main()
{
    int n,a=0,b=1,i;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        a += b;
        b = a - b;
        a = a - b;
        b += a; 
    }
    if(n < i)
        b = a;
    printf("\n%dth Term of Fibonacci Series : %d",n,b);
    return 0;
}