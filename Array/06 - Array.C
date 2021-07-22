#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Values[5] = {21, 55};

        printf("\n Value of 1st Element = %d",Values[0]);
        printf("\n Value of 2nd Element = %d",Values[1]);
        printf("\n Value of 3rd Element = %d",Values[2]);
        printf("\n Value of 4th Element = %d",Values[3]);
        printf("\n Value of 5th Element = %d",Values[4]);

        getch();


        Values[4] = 50;
        Values[2] = 101;
        Values[0] = 7;

        printf("\n\n New Values => \n\n");

        printf("\n Value of 1st Element = %d",Values[0]);
        printf("\n Value of 2nd Element = %d",Values[1]);
        printf("\n Value of 3rd Element = %d",Values[2]);
        printf("\n Value of 4th Element = %d",Values[3]);
        printf("\n Value of 5th Element = %d",Values[4]);

        getch();
        return 0;
}
