//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter a Three Digit Number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        sum=sum+num%10;
        num/=10;
    }
    printf("Sum of Digits: %d",sum);

    return 0;
}