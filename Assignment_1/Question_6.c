
#include<stdio.h>

int main()
{
    char name[50];
    printf("Enter Your Full Name: ");
    scanf("%[^\n]s",name);
    printf("\"Hello, %s\"",name);
    return 0;
}
