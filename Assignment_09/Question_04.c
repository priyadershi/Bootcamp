/* 4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int l,b,h,ch,temp;
    printf("\n\t\tCheck If Given Triangle is: \n"
            "1. Isosceles Triangle\n"
            "2. Right Angled Triangle\n"
            "3. Equilateral Triangle\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&ch);
    printf("Enter Length of Three Sides of Triangle: ");
    scanf("%d %d %d",&l,&b,&h);
    if(l > h)
    {
        temp = l;
        l = h;
        h = temp;
    }
    if(b > h)
    {
        temp = b;
        b = h;
        h = temp;
    }
    if(l+b <= h)
    {
        printf("\n\tInvalid Trianlge!");
        exit(0);
    }
    switch(ch)
    {
        case 1:
            if(l == b)
                printf("\n\tYes, Isosceles Triangle");
            else
                printf("\n\tNot an Isosceles Triangle");
            break;
        case 2: 
            if(h*h == l*l + b*b)
                printf("\n\tYes, Right Angle Triangle");
            else
                printf("\n\tNot a Right Angle Triangle!");
            break;
        case 3: 
            if(l == b && b == h)
                printf("\n\tYes, Equilatereal Triangle");
            else
                printf("\n\tNot an Equilateral Triangle!");
            break;
        default : printf("Invalid Choice!");

    }
    return 0;
}