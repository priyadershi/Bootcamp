//3. Write a program to swap values of two int variables

#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping -\na = %d\nb = %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping -\na = %d\nb = %d",a,b);

    return 0;
}