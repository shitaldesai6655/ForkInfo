#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 3

int main()
{
        int i = 0, Max = 0, Bill[Size] = {0};

        for(i = 0; i < Size ; i++)
        {

                printf("\n Enter Bill No %d = ", (i + 1) );
                scanf("%d",&Bill[i]);

                if((i == 0) || (Bill[i] > Max))
                {
                        Max = Bill[i];
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

        printf("\n Maximum amount recieved today = %d.",Max);


        getch();
        return 0;
}
