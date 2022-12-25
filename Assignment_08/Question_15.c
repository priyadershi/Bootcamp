#include<stdio.h>

int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==n-i || j == n || i == n-1)
                printf("* ");
            else
                printf("  ");
        } printf("\n\n");
    }

    return 0;
}