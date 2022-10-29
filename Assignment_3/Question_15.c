//15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf(num>0?"positive" : num<0?"Negative":"Zero");
}