#include<stdio.h>

int main()
{
    int n=7;
    char ch;
    for(int i=0; i<n; i++)
    {
        ch = 'A';
        for(int j=1; j<=2*n-1; j++)
        {
            if(j <= n-i || j >= n+i)
                printf("%c ",ch);
            else
                printf("  ");
            if(j < n)
                    ch++;
                else
                    ch--;
        }   printf("\n");
    }

    return 0;
}