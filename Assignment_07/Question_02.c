//2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main()
{
    int n,a[2] = {0,1},i;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(i<2)
            printf("%d\t",a[i]);
        else
        {   a[0] += a[1];
            a[1] = a[0] - a[1];
            a[0] = a[0] - a[1];
            a[1] = a[0] + a[1];
            printf("%d\t",a[1]);
        }
    }
}