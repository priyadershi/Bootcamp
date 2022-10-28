/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD.*/

#include<stdio.h>

int main()
{
    float rup,dol;
    printf("Enter Amount(in Rupees): ");
    scanf("%f",&rup);
    dol=rup/76.23;
    printf("Amount in Dollar: %.2f$",dol);

    return 0;
}