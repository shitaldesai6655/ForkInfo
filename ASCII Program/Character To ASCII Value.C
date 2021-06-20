#include<stdio.h>
#include<conio.h>

int main()
{
       char ch = '\0';
       int Val = 0;

       printf("\n Enter a Character To get its Corresponding ASCII Value = ");
       scanf("%c",&ch);

       Val = ch;

       printf("\n Character For Given ASCII Value of %c is = %d", ch, Val);

       printf("\n Thanks...");

       getch();
       return 0;
}
