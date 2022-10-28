/*11. Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number.*/

#include<stdio.h>

int main()
{
    int num,dig;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("Enter a Digit: ");
    scanf("%d",&dig);
    num=num*10+dig;
    printf("New Number is %d",num);

    return 0;
}