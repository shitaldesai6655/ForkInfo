#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Bills(int*, int);
void Display_Bills(int*, int);
int Sum_Of_Elements(int*,int);

int main()
{
        int i = 0, Cnt = 0, Bill_Sum = 0;
        int *Ptr = NULL;

        printf("\n Enter how many no. of Bills do you have = ");
        scanf("%d",&Cnt);


        Ptr = (int*) malloc (Cnt * sizeof(int));

        Accept_Bills(Ptr, Cnt);
        Display_Bills(Ptr,Cnt);

        Bill_Sum = Sum_Of_Elements(Ptr, Cnt);

        printf("\n\n Summation of Bills is = %d", Bill_Sum);

        getch();
        return 0;
}

int Sum_Of_Elements(int* Ptr, int Size)
{
        int Sum = 0, i = 0;

         for(i = 0; i < Size; i++)
        {

                Sum += Ptr[i];
        }

        return Sum;

}

void Accepts_Bills(int *Ptr, int Size)
{
        for(int i = 0; i < Size; i++)
        {
                printf("\n Enter %d Bill = ",i + 1);
                scanf("%d", &Ptr[i]);
        }

        return;
}

void Display_Bills(int *Ptr, int Size)
{
        for(i = 0; i < Size; i++)
        {
                printf("\n Bill no %d = %d",i+1, Ptr[i]);
        }

        return;
}



