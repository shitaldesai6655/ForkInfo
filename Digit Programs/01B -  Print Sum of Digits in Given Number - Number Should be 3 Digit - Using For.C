#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, Temp = 0, Sum = 0, Cnt = 0;

     Up:
          printf("\n\n Enter 3 Digit +ve integer Number To Find Digit Sum = ");
          scanf("%d",&No);

          for(Cnt = 0, Temp = No; Temp > 0; Cnt++, Temp /= 10);


          if(Cnt == 3)
              {
                  for(Temp = No; Temp > 0; Sum += (Temp % 10), Temp /= 10);

                  printf("\n Sum of Digits in Given 3 Digit No %d is = %d",No, Sum);
              }
             else
               {
                     printf("\n Invalid Input");
                     goto Up;
               }

           printf("\n\n Thanks...");

           getch();
           return 0;
}
