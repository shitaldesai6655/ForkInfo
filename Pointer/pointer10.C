#include<stdio.h>
#include<conio.h>

void Karad();

const int gNum = 505;

int main()
{
        const int Num = 100;

        int P = Num - 50;

        printf("\n Value of Num = %d",Num);

        printf("\n Value of P = %d",P);

        printf("\n Value of global variable gNum inside main() = %d",gNum);

        Karad();

        getch();
        return 0;
}

void Karad()
{
        const int No = 1001;

        printf("\n Value of local const No is = %d",No);

        printf("\n Value of Global Variable gNum inside Karad() = %d",gNum);

        return;
}
