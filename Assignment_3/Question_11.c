/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.*/

#include<stdio.h>

int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter marks of Subject 1: ");
    scanf("%d",&sub1);
    printf("Enter marks of Subject 2: ");
    scanf("%d",&sub2);
    printf("Enter marks of Subject 3: ");
    scanf("%d",&sub3);
    printf("Enter marks of Subject 4: ");
    scanf("%d",&sub4);
    printf("Enter marks of Subject 5: ");
    scanf("%d",&sub5);
    if(sub1>=33&&sub2>=33&&sub3>=33&&sub4>=33&&sub5>=33)
        printf("Congratulations! You are Pass.");
    else
        printf("You are Fail.");

    return 0;
}