#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 149;
        int *s = &No;
        int **a = &s;
        int ***d = &a;
        int ****b = &d;
        int *****l = &b;

        printf("\n No = %d",&No);
        printf("\n s = %d",&s);
        printf("\n a = %d",&a);
        printf("\n d = %d",&d);
        printf("\n b = %d",&b);
        printf("\n l = %d",&l);
        printf("\n*******************\n");
        getch();


        printf("\n%d",No);
        printf("\n%d",&No);
        printf("\n%d",&s);
        printf("\n%d",*s);
        printf("\n%d",**a);
        printf("\n%d",**(&d));
        printf("\n%d",&(***b));
        printf("\n%d",****l);
        printf("\n%d",***(&d));

        printf("\n\n Thanks...");

        getch();
        return 0;




}
