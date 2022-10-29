/*4. Write a program to check whether a given number is an even number or an odd 
number without using % operator.*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    if(num/2.0==num/2)
        printf("Even Number");
    else 
        printf("Odd Number");
    
    return 0;
}