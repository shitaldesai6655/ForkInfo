#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0;

      printf("\n Enter a Number = ");
      scanf("%d",&No);

      if(No %2 == 0)
      {
            printf("\n Given Number %d is Even.",No);
      }
      else
      {
            printf("\n Given Number %d is Odd.",No);
      }

      printf("\n\n Thanks...");

      getch();
      return 0;
}
