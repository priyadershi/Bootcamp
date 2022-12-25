#include<stdio.h>

int main()
{
    int n=4,k=1;
    for(int i=0;i<n;i++)
    {
        k=1;
        for(int j=1;j<=2*n-1; j++)
        {
            if(j <= n-i || j >= n+i)
                printf("%d ",k);
            else
                printf("  ");
            if(j<n)
                k++;
            else
                k--;
        } printf("\n\n");
    }
    return 0;
}