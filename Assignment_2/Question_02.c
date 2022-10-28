//2. Write a program to print a given number without its last digit.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("Number is %d",num/10);
    return 0;
}