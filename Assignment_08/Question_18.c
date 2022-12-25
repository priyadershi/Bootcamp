#include<stdio.h>

int main()
{
    int n=5,k=0;

    for(int i=1; i<=2*n; i++)
    {
        if(i > n)
            k += 2;
        for(int j=1; j<=2*n-1; j++ )
        {
            if(j > n-i+k && j < n+i-k)
                printf("* ");
            else 
                printf("  ");
        } printf("\n\n");
    }

    return 0;
}