#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 20;

        int *NumPtr = &Num;

        printf("\n Value of Num = %d", Num); /// 20
        printf("\n Address of Num = %d", &Num); /// 6422044

        printf("\n Value of NumPtr = %d", NumPtr); /// 6422044
        printf("\n Address of NumPtr = %d", &NumPtr); /// 6422032

        printf("\n Value of Num by NumPtr = %d", *NumPtr); /// 20


        printf("\n\n Thanks...");

        getch();
        return 0;
}
