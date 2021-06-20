#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, Temp = 0, Rev = 0, Cnt = 0;

     Up:
          printf("\n\n Enter 5 Digit +ve integer Number To Find Digit Sum = ");
          scanf("%d",&No);

          for(Cnt = 0, Temp = No; Temp > 0; Cnt++, Temp /= 10);


          if(Cnt == 5)
              {
                  for(Temp = No; Temp > 0; Temp /= 10)
                  {
                        Rev = (Rev * 10) + (Temp % 10);
                  }

                  printf("\n Reverse of Given 5 Digit No %d is = %d",No, Rev);
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

