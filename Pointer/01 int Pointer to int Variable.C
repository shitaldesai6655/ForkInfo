#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 121;

        int *P = &Num;

        printf("\n Value of Num = %d",Num);
        printf("\n Address of Num = %d",&Num);

        printf("\n Value of P = %d",P);
        printf("\n Address of P = %d",&P);

        printf("\n Value of Variable");
        printf(" To Which Pointer P Points i.e. (*P) = %d",*P);

        getch();
        return 0;

}
