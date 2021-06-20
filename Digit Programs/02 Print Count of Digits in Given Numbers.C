#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0, Temp = 0, Cnt = 0;

      printf("\n Enter a Number to Find Number of Digits =  ");
      scanf("%d",&No);

      if(No < 0)
      {
           Temp = -No;
      }
      else
      {
           Temp = No;
      }

      while(Temp > 0)
      {
            Temp = Temp / 10;
            Cnt++;
      }

      printf("\n Count of Digits in %d is = %d", No, Cnt);

      printf("\n\n Thanks...");

      getch();
      return 0;
}
