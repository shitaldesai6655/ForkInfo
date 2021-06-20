#include<stdio.h>
#include<conio.h>

int main()
{
     int No = 0, Temp = 0, Dig = 0, Mcnt =0;

     printf("\n Enter a Number To Find Max Of Digit = ");
     scanf("%d",&No);

     Temp = No;

     while(Temp > 0)
     {
          Dig = Temp % 10;

          if(Dig > Mcnt)
          {
               Mcnt = Dig;
          }
          Temp = Temp / 10;
     }

     printf("\n The Max Of Digit of %d is = %d", No, Mcnt);

     printf("\n\n Thanks...");

     getch();
     return 0;
}
