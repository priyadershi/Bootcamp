//9. Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>

int main()
{
    int num,num1=0,n,i=0,rem,k;
    printf("Enter a Number: ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        i++;
        n /= 10;
    }

    n =  num;
    while(n!=0)
    {
        rem = n%10;
        k=1;
        for(int j=0;j<i;j++)
            k = k*rem;
        num1 += k;
        n /= 10;
    }

    if(num1 == num)
        printf("Armstrong Number");
    else 
        printf("Not an Armstrong Number");

    return 0;
}