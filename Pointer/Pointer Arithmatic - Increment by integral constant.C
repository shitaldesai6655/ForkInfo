#include<stdio.h>
#include<conio.h>

int main()
{
        int Num[5] = {15,59,88,37,65};
        int *Ptr = Num;

        printf("\n Base Address of Array is = %d",Num);
        printf("\n Value in Pointer = %d",Ptr);
        printf("\n Value of Array Element Where Pointer Pointing = %d",*Ptr);

        getch();

        Ptr = Ptr + 3;      /// Ptr += 3;

        // Ptr + 3     =  Ptr      +  (sizeof(<Data Type of Ptr>)  * 3);
        //             =  6422016  +  (sizeof(int) * 3);
        //             =  6422016  +  (4 * 3);
        //             =  6422016  +   12;
        //             =  6422028


        printf("\n\n New Value of Pointer = %d",Ptr);
        printf("\n Value of Array Element Where Pointer Pointing = %d",*Ptr);

        getch();
        return 0;
}
