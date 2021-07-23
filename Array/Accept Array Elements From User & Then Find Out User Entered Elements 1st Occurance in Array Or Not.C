#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
        int i = 0, No = 0, Value[Size] = {0};
        int Flag = -1;

        for(i = 0; i < Size; i++)
        {
                printf("\n Enter Value No %d =", (i+1));
                scanf("%d",&Value[i]);
        }

        getch();

        printf("\n Enter Element Whose 1st Occurrence You Want To Check in Array = ");
        scanf("%d",&No);

        for(i = 0; i < Size; i++)
        {
                if(Value[i] == No)
                {
                        Flag = i + 1;
                        break;
                }
        }

        if(Flag > 0)
        {
                printf("\n 1st Occurrence of %d Present In Array at Location = %d", No, Flag);
        }
        else
        {
                printf("\n No Such Element Present in Array");
        }

        getch();
        return 0;
}
