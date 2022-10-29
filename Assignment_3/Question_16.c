/*16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.*/

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);

    if( (ch>='0'&& ch<='9') || (ch>='A' && ch<='z') )
        if(ch<='9')
            printf("Digit");
        else if(ch<='Z')
            printf("Alphabate Uppercase");
        else
            printf("Alphabate Lowercase");
    else
        printf("Special Character");
}