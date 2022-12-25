#include<stdio.h>

int main()
{
    int n=10;

    for(int i=0;i<3; i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if(j>=2-i && j<=6+i || j>=13-i && j<=17+i)
                printf("* ");
            else
                printf("  ");
        } printf("\n\n");
    }


    for(int i=0;i<n;i++)
    {
        for(int j=1; j<=2*n-1; j++)
        {
            if( i==0 && j == 7)
            {
                printf("M y S i r G ");
                j += 6;
            }
            if(j>i && j < 2*n-i)
                printf("* ");
            else 
                printf("  ");
        } printf("\n\n");
    }
    return 0;
}   