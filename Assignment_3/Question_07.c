/*7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots*/

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("For Quadratic Equation ax^2 + bx + c=0 -\nEnter Value of a,b,c respectively: ");
    scanf("%d%d%d",&a,&b,&c);

    if((b*b-4*a*c)>0)
        printf("Roots are Read & Distinct");
    else if(b*b-4*a*c<0)
        printf("Roots are Imaginary");
        else  
            printf("Roots are Read and Equal");
    
    return 0;
}