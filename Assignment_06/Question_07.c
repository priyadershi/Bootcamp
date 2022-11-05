//7. Write a program to count digits in a given number

#include<stdio.h>

int main()
{
    int n,count=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n /=10;
    }
    printf("Total Number of Digit: %d",count);
    
    return 0;
}