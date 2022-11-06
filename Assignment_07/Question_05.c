//5. Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>

int main()
{
    int x,y,i ;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&x,&y);
    for(i=2;i<x;i++)
        if(x%i==0 && y%i==0)
            break;
    if(i==x)
        printf("Co-Prime Numbers");
    else 
        printf("Non Co-Prime Number");
        
    return 0;
}