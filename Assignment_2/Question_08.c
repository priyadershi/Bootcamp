//8. Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(num & 1)
        printf("Odd Number");
    else
        printf("Even Number");

    return 0;
}