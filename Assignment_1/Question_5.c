
#include<stdio.h>

int main()
{
    int len;
    char str[20];
    printf("Enter a String : ");
    scanf("%s",str);
    len=printf("%s",str);
    printf("\nLength of String : %d",len);
    return 0;
}