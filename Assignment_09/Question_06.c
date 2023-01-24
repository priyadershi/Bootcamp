// 6. Program to check whether a year is a leap year or not. Using switch statement.

#include<stdio.h>

int main()
{
    int year,ch;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year % 100 == 0)
        if( year % 400 == 0)
            ch = 1;
        else
            ch = 2;
    else if(year % 4 == 0)
        ch = 1;
    else
        ch = 2;

    switch(ch)
    {
        case 1: printf("\t%d is a Lear Year",year); break;
        case 2: printf("\t%d is a Non-Leap Year",year);
    }
    return 0;
}