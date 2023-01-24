//Program to Convert even number into its upper nearest odd number using Switch Statement.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter an Even Number: ");
    scanf("%d",&num);
    switch(num % 2 == 0)
    {
        case 1: printf("Nearest Odd Number: %d",num+1); break;
        default: printf("Invalid Input (Already Odd Number)!");
    }

    return 0;
}