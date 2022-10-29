//5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>

int main()
{
    int num,count=0;
    printf("Enter a three-digit Number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        count++;
        num/=10;
    }
    if(count==3)
        printf("Three Digit Number");
    else 
        printf("Non Three-Digit Number");

    return 0;
}