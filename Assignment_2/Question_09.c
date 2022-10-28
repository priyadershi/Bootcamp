//9. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>

int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Enter input for int, float, char, double type variable Respectively: ");
    scanf("%d%f%c%*c%lf",&a,&b,&c,&d);
    printf("Size of int: %d",sizeof(a));
    printf("\nSize of float: %d",sizeof(b));
    printf("\nSize of char: %d",sizeof(c));
    printf("\nSize of double: %d",sizeof(d));

    return 0;
}