//8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);

    if(year % 100)
        if(year%4)
            printf("Non-Leap Year");
        else 
            printf("Leap Year");
    else
        if(year % 400)
            printf("Non-leap Year");
        else 
            printf("Leap Year");

    return 0;
}