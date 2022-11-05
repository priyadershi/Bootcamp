//5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum +=  i*i*i;
    printf("%d",sum);
    
    return 0;
}