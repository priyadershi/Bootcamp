//2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    if(num%5)
        printf("Not-Divisible by 5");
    else 
        printf("Divisible by 5");

    return 0;
}