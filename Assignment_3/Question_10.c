/*10. Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>

int main()
{
    int cp,sp,res=0;
    printf("Enter Cost-Price: ");
    scanf("%d",&cp);
    printf("Enter Selling-Price: ");
    scanf("%d",&sp);
    if(sp>cp)
        {
            res=(sp-cp)*100/cp;
            printf("Profit Percentage: %d%%",res);
        }
    else 
        {
            res=(cp-sp)*100/cp;
            printf("Loss Percentage: %d%%",res);
        }

    return 0;
}