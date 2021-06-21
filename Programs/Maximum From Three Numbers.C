#include<stdio.h>
#include<conio.h>

int main()
{
      int No1 = 0, No2 = 0, No3 = 0;

      printf("\n Enter Three Numbers = ");
      scanf("%d%d%d",&No1,&No2,&No3);

      if(No1 > No2)
      {
            if(No1 > No3)
            {
                printf("\n Given Number %d is Maximum.",No1);
            }
            else
            {
                printf("\n Given Number %d is Maximum.",No3);
            }
      }
      else
      {
            if(No2 > No3)
            {
                printf("\n Given Number %d is Maximum.",No2);
            }
            else
            {
                printf("\n Given Number %d is Maximum.",No3);
            }
      }

      printf("\n\n Thanks...");

      getch();
      return 0;
}
