#include<stdio.h>

int main()
{
    int k=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
                printf("%d",k);
            else
                printf(" ");
            if(j<=3)
                k++;
            else 
                k--;
        }

        printf("\n"); k=1;
    }

    return 0;
}