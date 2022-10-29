//1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);

    if(x>0)
        printf("Positive");
    else 
        printf("Non-Positive");
    
    return 0;
}