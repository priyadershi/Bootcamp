//10. Write a program to print all Armstrong numbers under 1000

#include<stdio.h>

int main()
{
    int i,num=0,rem,n;
    for(i=1;i<=1000;i++)
    {
        num = 0;
        n = i;
        while(n!=0)
        {
            rem = n%10;
            num += rem * rem * rem;
            n /= 10;
        }
        if(num == i)
            printf("%d\t",num);
    }
    return 0;
}