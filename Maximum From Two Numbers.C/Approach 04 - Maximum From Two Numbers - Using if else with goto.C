#include<stdio.h>
#include<conio.h>

int main()
{
     int Num1 = 0, Num2 = 0;

 Accept:

     printf("\n Enter Two Integer Numbers =");
     scanf("%d%d",&Num1,&Num2);

     if(Num1 == Num2)
     {
            printf("\n Both Numbers Are Equal.");
            printf("\n=========================*******==========================");

            printf("\n For Comparison There Should Be Two Different Numbers.");
            goto Accept;
     }
     if(Num1 > Num2)
     {
            printf("\n Given 1st Number %d is Maximum.",Num1);
     }
     else
     {
            printf("\n Given 2nd Number %d is Maximum.",Num2);
     }

     printf("\n Thanks...");

     getch();
     return 0;
}
