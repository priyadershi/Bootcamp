//10. Write a program to reverse a given number

#include<stdio.h>

int main()
{
    int n,m=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        m = m * 10 + (n%10);
        n /= 10; 
    }    
    printf("New Number : %d",m);
    
    return 0;
}