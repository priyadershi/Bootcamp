//4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>

int main()
{
    
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping -\na = %d\nb = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping -\na = %d\nb = %d",a,b);

    return 0;
}