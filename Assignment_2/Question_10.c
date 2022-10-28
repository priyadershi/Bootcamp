//10. Write a program to make the last digit of a number stored in a variable as zero. 

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    num-=num%10;
    printf("New Number is %d",num);

    return 0;
}