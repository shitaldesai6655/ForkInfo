#include<stdio.h>
#include<conio.h>

int main()
{
        int Num[5] = {15,59,88,37,65};
        int *Ptr = &Num[4];

        printf("\n Base Address of Array is = %d",Num);
        printf("\n Value in Pointer = %d",Ptr);
        printf("\n Value of Array Element Where Pointer Pointing = %d",*Ptr);

        getch();

        Ptr = Ptr - 2;

        // Ptr = Ptr - 2   =  Ptr      - (sizeof(<Data Type of Ptr>)  * 2);
        //                 =  6422016  -  (sizeof(int) * 2);
        //                 =  6422016  -  (4 * 2);
        //                 =  6422016  -   8;
        //                 =  6422008


        printf("\n\n New Value of Pointer = %d",Ptr);
        printf("\n Value of Array Element Where Pointer Pointing = %d",*Ptr);

        getch();
        return 0;
}
