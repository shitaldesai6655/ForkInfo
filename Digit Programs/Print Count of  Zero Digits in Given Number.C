#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0, Temp = 0, Zcnt = 0;

      printf("\n Enter a Number to Find No of Digits = ");
      scanf("%d",&No);

      Temp = No;

      while(Temp > 0)
      {
            if((Temp % 10) == 0)
            {
                Zcnt++;
            }

            Temp = Temp / 10;
      }

      printf("\n Count of Zero Digits in %d is = %d", No, Zcnt);

      printf("\n\n Thanks...");

      getch();
      return 0;
}
