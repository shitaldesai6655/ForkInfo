#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int r = 0, c = 0, TDA[4][3] = {};

        /// Accept Elements from 2 - D Array

        for(r = 0; r < 4; r++)
        {
                for(c = 0; c < 3; c++)
                {
                        printf("Enter Value For Element [%d][%d] = ",r+1, c+1);
                        scanf("%d",&TDA[r][c]);
                }

                printf("\n");
        }

        getch();
        // system("cls");

        ///Updated 2 - D Array Display

        printf("\n\n Updated Values in Given 2 - D Array => \n");

        for(r = 0; r < 4; r++)
        {
                for(c = 0; c < 3; c++)
                {
                        printf("\n Values of Element [%d][%d] = %d",r+1, c+1, TDA[r][c]);
                }
                printf("\n");
        }

        getch();
        return 0;



}
