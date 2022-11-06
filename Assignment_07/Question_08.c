//8. Write a program to find next Prime number of a given number

#include<stdio.h>

int main()
{
    int a,i;
    printf("Enter a Number: ");
    scanf("%d",&a);

    while(1)
    {
        a++;
        for(i=2;i<a;i++)
            if(a%i==0)
                break;
        if(i == a)
        {
            printf("%d",a);
            break;
        }
    }

    return 0;
}