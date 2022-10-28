/*13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a three-digit Number: ");
    scanf("%d",&num);
    num=(num%10)*100+num/10;
    printf("New Number is %d",num);

    return 0;
}