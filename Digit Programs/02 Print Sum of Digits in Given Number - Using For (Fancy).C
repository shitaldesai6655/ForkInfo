#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0, Temp = 0, Sum = 0;

      printf("\n Enter a +ve Integer Number to Find Digit Sum = ");
      scanf("%d",&No);

      for(Temp = No; Temp > 0; Temp /= 10)
      {
            Sum += (Temp % 10);                /// Sum = Sum = (Temp % 10)
      }

      printf("\n Sum of Digits in %d is = %d",No, Sum);

      printf("\n\n Thanks...");

      getch();
      return 0;
}

