//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    
    if(num%21==0)
        printf("Divisible by both 3 & 7");
    else if(num%3==0)
        printf("Divisible by 3");
    else if(num%7==0)
        printf("Divisible by 7");
    
    return 0;
}