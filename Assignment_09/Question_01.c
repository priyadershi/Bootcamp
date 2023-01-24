//1. Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>

int main()
{
    short int month;
    printf("Enter Month Number: ");
    scanf("%d",&month);
    if(month == 2)
        printf("28 or 29 Days");
    else if(month <= 7)
        if(month % 2 == 0)
            printf("30 Days");
        else 
            printf("31 Days");
    else if(month <= 12)
        if(month % 2 ==0)
            printf("31 Days");
        else 
            printf("30 Days");
    else
        printf("Invalid Month Number!");
    return 0;
}