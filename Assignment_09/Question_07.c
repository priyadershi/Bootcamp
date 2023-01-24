/* Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int eUnit;
    float eBill;
    printf("Enter total Electricity Consumption(in Unit): ");
    scanf("%d",&eUnit);
   
    switch(eUnit)
    {
        case 1 ... 50: 
            eBill = (eUnit * 0.50) * 1.2;
            break;
        case 51 ... 150:
            eBill = (25 + (eUnit - 50) * 0.75) * 1.2;
            break;
        case 151 ... 250: 
            eBill = (25 + 75 + (eUnit - 150) * 1.20) * 1.2;
            break;
        case 251 ... 99999999:
            eBill = (25 + 75 + 120 + (eUnit - 250) * 1.50) * 1.2;
            break;
        default:
            printf("Invalid Entry!"); 
            exit(0);
    }
    printf("\tElectricity Bill : %.2f",eBill);
    return 0;
}