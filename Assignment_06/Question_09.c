//9. Write a program to calculate LCM of two numbers

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=a*b;i++)
        if(i%a == 0&& i%b==0)
        {   
            printf("LCM : %d",i);
            break;
        }

    return 0;
}