#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
        int i = 0, No = 0, Cnt = 0, Value[Size] = {0};

        for(i = 0; i < Size; i++)
        {
                printf("\n Enter Value No %d =", (i+1));
                scanf("%d",&Value[i]);
        }

        getch();

        printf("\n Enter Element Which You Want To Check in Array = ");
        scanf("%d",&No);

        for(i = 0; i < Size; i++)
        {
                if(Value[i] == No)
                {
                        Cnt++;
                }
        }

        if(Cnt > 0)
        {
                printf("\n Given Element %d Present In Array", No);
        }
        else
        {
                printf("\n No Such Element Present in Array");
        }

        getch();
        return 0;
}
