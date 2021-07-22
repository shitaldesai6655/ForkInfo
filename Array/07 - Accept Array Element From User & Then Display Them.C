#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Values[5] = {0};

        printf("\n Enter Element No. 1 =");
        scanf("%d",&Values[0]);

        printf("\n Enter Element No. 2 =");
        scanf("%d",&Values[1]);

        printf("\n Enter Element No. 3 =");
        scanf("%d",&Values[2]);

        printf("\n Enter Element No. 4 =");
        scanf("%d",&Values[3]);

        printf("\n Enter Element No. 5 =");
        scanf("%d",&Values[4]);

        getch();
        system("cls");       ///clrscr();   Function to clear output window

        printf("\n\n Element in array are => \n\n");

        printf("\n Value of 101 Element = %d",Values[0]);
        printf("\n Value of 102 Element = %d",Values[1]);
        printf("\n Value of 103 Element = %d",Values[2]);
        printf("\n Value of 104 Element = %d",Values[3]);
        printf("\n Value of 105 Element = %d",Values[4]);

        getch();
        return 0;
}
