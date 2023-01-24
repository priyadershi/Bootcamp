//10. C program to find all roots of a quadratic equation using switch case
#include<math.h>

#include<stdio.h>

int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter Value of a,b and c respectively (for ax^2 + bx + c): ");
    scanf("%f %f %f",&a,&b,&c);
    d = b*b - 4*a*c ;
    if(d >= 0)
    {
        x1 = (b - sqrt(d))/2*a;
        x2 = (b + sqrt(d))/2*a;
        printf("%.1f %.1f",x1,x2);
    }
    return 0;
}