#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0, Temp = 0, Ocnt = 0;

      printf("\n Enter a Number to Find No of Odd Digits = ");
      scanf("%d",&No);

      Temp = No;

      while(Temp > 0)
      {
            if(((Temp % 10) % 2 != 0))
            {
                Ocnt++;
            }

            Temp = Temp / 10;
      }

      printf("\n Count of Odd Digits in %d is = %d", No, Ocnt);

      printf("\n\n Thanks...");

      getch();
      return 0;
}
