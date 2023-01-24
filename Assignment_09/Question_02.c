/* 2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include<stdio.h>
#include<stdlib.h>
void numInput(float*,float*);

void numInput(float *a,float *b)
{
    printf("Enter Two Numbers: ");
    scanf("%f %f",a,b);
}

int main()
{
    float a,b;
    int ch;
    printf("1. Addition\n"
            "2. Subtraction\n"
            "3. Multiplication\n"
            "4. Division\n"
            "5. Exit\n");
    printf("\n\tEnter Your Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: 
            printf("\t\tAddition of Two Numbers\n ");
            numInput(&a,&b);
            printf("Sum of %.2f and %.2f: %.2f",a,b,a+b);
            break;
        case 2: 
            printf("\t\tSubtraction of Two Numbers\n");
            numInput(&a,&b);
            printf("Subtraction of %.2f and %.2f: %.2f",a,b,a-b);
            break;
        case 3:
            printf("\t\tMultiplication of Two Numbers\n");
            numInput(&a,&b);
            printf("Multiplicait of %.2f and %.2f: %.2f",a,b,a*b);
            break;
        case 4: 
            printf("\t\tDivision of Two Numbers\n");
            numInput(&a,&b);
            printf("Division of %.2f and %.2f: %.2f",a,b,a/b);
            break;
        default: exit(0);

    }
    return 0;
}