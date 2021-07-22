#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Ele_Cnt = 0, Index_Cnt = 0, Values[5] = {0};

        for(Index_Cnt = 0, Ele_Cnt = 1; Index_Cnt < 5; Index_Cnt++, Ele_Cnt++ )
        {
                printf("\n Enter Element No %d = ", Ele_Cnt);
                scanf("%d",&Values[Index_Cnt]);
        }

        getch();
        return 0;
}
