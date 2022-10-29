//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    if(num%6)
        printf("Not Divisible by 2 & 3");
    else 
        printf("Divisible by 2 & 3");

    return 0;
}