#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';
    int No = 55;
    int Size = 0;

    Size = sizeof(No);

    printf("\n Size for Integer No is = %d",Size);

    printf("\n Size for Character Variable ch is = %d",sizeof(ch));

    printf("\n Size for float data type is = %d ",sizeof(float));

    printf("\n Size for double data type is = %d",sizeof(double));

    getch();
    return 0;
}


