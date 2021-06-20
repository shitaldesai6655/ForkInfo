#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0, Temp = 0, Ecnt = 0;

      printf("\n Enter a Number to Find No of Even Digits = ");
      scanf("%d",&No);

      Temp = No;

      while(Temp > 0)
      {
            if(((Temp % 10) % 2 == 0))
            {
                Ecnt++;
            }

            Temp = Temp / 10;
      }

      printf("\n Count of Even Digits in %d is = %d", No, Ecnt);

      printf("\n\n Thanks...");

      getch();
      return 0;
}
