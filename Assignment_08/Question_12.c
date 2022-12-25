#include<stdio.h>

int main()
{
    int n=5;
    char ch;
    for(int i=1; i<=n; i++)
    {
        ch = 'A';
        for(int j=1; j<=2*n-1; j++)
        {
            if(j >= i && j <= 2*n-i)
            {
                printf("%c ",ch);
                if(j < n)
                    ch++;
                else
                    ch--;
            }
            else
                printf("  ");
            
        }   printf("\n");
    }

    return 0;
}