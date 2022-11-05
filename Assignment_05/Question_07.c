//7. Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>

int main()
{
    int n;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    
    for(int i=2*n;i>0;i-=2)
        printf("%d\n",i);

    return 0;
}