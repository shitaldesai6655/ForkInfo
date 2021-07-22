#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
        int i = 0, Z_Cnt = 0, Bill[Size] = {0};

        for(i = 0; i < Size ; i++)
        {

                printf("\n Enter Bill No %d = ", (i + 1) );
                scanf("%d",&Bill[i]);

                if(Bill[i] == 0)
                {
                        Z_Cnt++;
                }

        }

        getch();
        system("cls");

        printf("\n Bill Generated Today => \n");

        for(i = 0; i < Size ; i++)
        {
                printf("\n Amount in Bill No %d = %d", (i + 1001),Bill[i]);

        }

        printf("\n\n=========================================================\n");

        printf("\n Z_Cnt recieved today = %d.",Z_Cnt);


        getch();
        return 0;
}
