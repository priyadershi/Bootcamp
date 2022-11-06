//7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>

int main()
{
    int a,b,i;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    for(a++;a<b;a++)
    {
        for(i=2;i<a;i++)
            if(a%i==0)
                break;
        if(i == a)
            printf("%d\t",a);
    }

    return 0;
}