#include<stdio.h>

int main()
{
    char ch;
    int n=5;
    for(int i=1;i<=n;i++)
    {
        ch = 'A';
        for(int j=1; j<=2*n-1; j++)
        {
            if(j>n-i && j<n+i)
            {
                printf("%c ",ch);
                if(j < n)
                    ch++;
                else
                    ch--;
            }
            else
                printf("  ");
        } printf("\n");
    }

    return 0;
}