#include<stdio.h>
#include<conio.h>

int main()
{
        int cnt = 1, Num = 0, Sum = 0;

        printf("\n Enter Bill Amount For Addition => ");
        printf("\n Note : Enter Zero To  Stop Addition.");

        for(cnt = 1;;cnt++)
        {
               printf("\n\n Enter Bill Number %d = ", cnt);
               scanf("%d",&Num);

               if(Num == 0)
               {
                     break;
               }

               Sum = Sum + Num;
        }

        //system("cls");

        printf("\n Addition of Given Numbers is = %d", Sum);

        printf("\n\n Thanks...");

        getch();
        return 0;


}
