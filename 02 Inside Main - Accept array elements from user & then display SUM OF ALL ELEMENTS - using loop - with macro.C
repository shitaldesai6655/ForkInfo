#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
        int i = 0, Cnt = 0, Bill_Sum = 0;
        int *Ptr = NULL;

        printf("\n Enter how many no. of Bills do you have = ");
        scanf("%d",&Cnt);


        Ptr = (int*) malloc (Cnt * sizeof(int));

        for(i = 0; i < Cnt; i++)
        {
                printf("\n Enter Bill no. %d = ",i + 1);
                scanf("%d",&Ptr[i]);

                Bill_Sum += Ptr[i];
        }

        getch();
        system("cls");

        printf("\n Bills Generated today = \n");

        for(i = 0; i < Cnt; i++)
        {
                printf("\n Amount in Bill no %d = %d",(i + 1001),Ptr[i]);
        }

        printf("\n Total amount received today = %d",Bill_Sum);

        getch();
        return 0;
}
