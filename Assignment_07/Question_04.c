//4. Write a program to calculate HCF of two numbers

#include<stdio.h>

int main()
{
    int a,b,i=0;
    printf("Enter TWo Numbers: ");
    scanf("%d%d",&a,&b);
    if(a < b)
        i = a;
    else 
        i = b;
    while(1)
    {
        if(a%i==0 && b%i==0)
            break;
        i--;
    }
    printf("HCF is %d",i);
    return 0;    
}