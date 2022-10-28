//6. Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("\nPress Any character on Keyboard to know its ASCII Code & Press Esc to Exit.\n");
    while(1)
    {
        ch=getch();
        if(ch==27)
            break;
        printf("\n%c = %d",ch,ch);
    }

    return 0;
}