#include<stdio.h>
#include<conio.h>

int main()
{
     char ch = '\0';

     printf("\n Enter a Character = ");
     ch = getche();                           /// scanf("%c",&ch);

     if( (ch >= 'A') && (ch <= 'Z') )
     {
         printf("\n\n Given Character is Upper Case.");
     }
     else if( (ch >= 'a') && (ch <= 'z') )
     {
         printf("\n\n Given Character is Lower Case.");
     }
     else
     {
         printf("\n\n Given Character is Neither Upper case Nor Lower Case.");
     }

     printf("\n\n Thanks...");

     getch();
     return 0;
}
