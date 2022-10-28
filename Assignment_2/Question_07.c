//7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int main()
{
    int num,count=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    while(num)
    {
        count++;
        if(num%2)
            break;
        num/=2;
    }
    printf("Position of First 1 in LSB: %d",count);

    return 0;
}