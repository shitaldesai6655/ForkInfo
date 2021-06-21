#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0;

       printf("\n Enter a Number = ");
       scanf("%d",&No);

       if(No %2 == 1)
       {
           printf("\n Given Number %d is Prime.",No);
       }
       else
       {
           printf("\n Given Number %d is Not a Prime Number.",No);
       }

       printf("\n\n Thanks...");

       getch();
       return 0;
}
