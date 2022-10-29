/*18. Write a program which takes the month number as an input and display number of 
days in that month*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter Month Number: ");
    scanf("%d",&num);

    if(num==2)
        printf("28 or 29 Days");
    else
        if(num <= 7)
            if(num%2)
                printf("31 Days");
            else 
                printf("30 Days");
        else  
            if(num%2)
                printf("30 Days");
            else
                printf("31 Days");
                
}