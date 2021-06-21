#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0;

        printf("\n Enter a Number = ");
        scanf("%d",&No);

        if( (No % 5 == 0) && (No % 7 == 0) )
        {
             printf("\n\n Given No %d is Divisible by Both 5 & 7.",No);
        }
        else if(No % 5 == 0)
        {
             printf("\n\n Given No %d is Divisible by 5.",No);
        }
        else if(No % 7 == 0)
        {
             printf("\n\n Given No %d is Divisible by 7.",No);
        }
        else
        {
             printf("\n\n Given No %d is not Divisible by both 5 & 7.",No);
        }

        printf("\n\n Thanks...");

        getch();
        return 0;
}
