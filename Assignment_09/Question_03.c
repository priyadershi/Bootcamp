// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>

int main()
{
    int day;
    printf("Enter Day Number: ");
    scanf("%d",&day);
    switch(day)
    {
        case 1: printf("Hello There, It is Sunday Today!"); break;
        case 2: printf("Hello There, It is Monday Today!"); break;
        case 3: printf("Hello There, It is Tuesday Today!"); break;
        case 4: printf("Hello There, It is Wednesday Today!"); break;
        case 5: printf("Hello There, It is Thursday Today!"); break;
        case 6: printf("Hello There, It is Friday Today!"); break;
        case 7: printf("Hello There, It is Saturday Today!"); break;
        default: printf("Invalid Day Number!");
    }

    return 0;
}
