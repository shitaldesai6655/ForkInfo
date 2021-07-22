#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
        int i = 0, Min = 0, Bill[Size] = {0};

        for(i = 0; i < Size ; i++)
        {

                printf("\n Enter Bill No %d = ", (i + 1) );
                scanf("%d",&Bill[i]);

                if((i == 0) || (Min > Bill[i]) )
                {
                        Min = Bill[i];
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

        printf("\n Minimum amount recieved today = %d.",Min);

        getch();
        return 0;
}
