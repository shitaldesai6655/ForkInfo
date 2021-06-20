
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
     else if( (ch >= '0') && (ch <= '9') )
     {
         printf("\n\n Given Character is Digit.");
     }
     else
     {
         printf("\n\n Given Character is Special Symbol.");
     }

     printf("\n\n Thanks...");

     getch();
     return 0;
}
