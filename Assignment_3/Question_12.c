//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter an Alphabates: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='z')
        if(ch<='Z')
            printf("Upper Case");
        else 
            printf("Lower Case");
    else
        printf("Invalid Input!");

    return 0;

}