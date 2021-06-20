#include<stdio.h>
#include<conio.h>

int main()
{
         char ch = '\0', Start_ch = '\0', End_ch = '\0';

         printf("\n Enter Start Point = ");
         Start_ch = getche();                       /// scanf("%c",&ch);

         printf("\n Enter End Point = ");
         End_ch = getche();                         /// scanf("%c",&ch);

         if(Start_ch < End_ch)
         {
               for(ch = Start_ch; ch <= End_ch; ch++)
               {
                     printf("\n %c",ch);
               }
         }
         else
         {
             for(ch = Start_ch; ch >= End_ch; ch--)
             {
                  printf("\n %c",ch);
             }
         }

         printf("\n\n Thanks...");

         getch();
         return 0;
}
