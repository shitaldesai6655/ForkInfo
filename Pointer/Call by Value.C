#include<stdio.h>
#include<conio.h>

void Change(int);

int main()
{
        int No = 21;

        printf("\n Value of No Before Function Call = %d", No);

        Change(No);

        printf("\n Value of No After Function Call = %d", No);

        printf("\n\n Thanks...");

        getch();
        return 0;
}

void Change(int Num)
{
        Num++;
}


