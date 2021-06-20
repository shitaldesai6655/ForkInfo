#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, Temp = 0, Sum = 0, Cnt = 0;

       printf("\n Enter 3 Digit +ve integer Number To Find Digit Sum = ");
       scanf("%d",&No);

       /// Count of Digits
       Temp = No;

       while(Temp > 0)
       {
             Cnt++;
             Temp /= 10;
       }

       if(Cnt == 3)
          {
               Temp = No;

               while(Temp > 0)
               {
                     Sum += (Temp % 10);
                     Temp /= 10;
               }

               printf("\n Sum of Digits in Given 3 Digit No %d is = %d",No, Sum);
          }
          else
          {
               printf("\n Invalid Input");
          }

          printf("\n\n Thanks...");

          getch();
          return 0;
}
