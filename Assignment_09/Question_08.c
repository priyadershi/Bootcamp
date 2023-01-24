/* Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement. */

#include<stdio.h>

int main()
{
    int num,ch;
    printf("Enter a Number: ");
    scanf("%d",&num);
    switch(num)
    {
        case 1 ... 99999999: printf(" New Number: %d",num * -1); break;
        default: printf("New Number: %d",num * -1);

    }
    return 0;
}