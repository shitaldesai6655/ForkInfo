#include<stdio.h>
#include<conio.h>

int main()
{
       char ch = '\0';


       printf("\n Enter a Character = ");
       scanf("%c",&ch);

       switch(ch)
       {
          case 'A':
          case 'a':
                    printf("\n WELCOME");
                    break;

          case 'B':
          case 'b':
                    printf("\n GOOD BTE");
                    break;

          case 'C':
          case 'c':
                    printf("\n HAVE A NICE DAY");
                    break;

          case 'D':
          case 'd':
                    printf("\n GOOD DAY");
                    break;

          default:
                    printf("\n INVALID INPUT...");
                    break;
       }

       printf("\n\n THANKS...");

       getch();
       return 0;
}
