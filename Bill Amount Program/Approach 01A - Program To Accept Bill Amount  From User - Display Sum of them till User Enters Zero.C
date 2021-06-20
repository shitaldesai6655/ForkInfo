#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int cnt = 1, Num = 0, Sum = 0;

        printf("Enter Bill Amount For Addition => ");
        printf("\n Note : Enter Zero To Stop Addition.");

        while(cnt <= 5)
        {
               printf("\n Enter Bill No %d = ", cnt);
               scanf("%d",&Num);

               if(Num == 0)
               {
                     break;;
               }
               Sum = Sum + Num;
               cnt++;

        }

        system("cls");

        printf("\n Addition Of Given Number is = %d", Sum);

        printf("\n\n Thanks...");

        getch();
        return 0;
}
