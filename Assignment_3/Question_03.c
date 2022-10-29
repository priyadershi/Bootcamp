/*3. Write a program to check whether a given number is an even number or an odd 
number.*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    if(num%2)
        printf("Odd Number");
    else 
        printf("Even Numbeer");

    return 0;
}