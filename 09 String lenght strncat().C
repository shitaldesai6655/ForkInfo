#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char College[30] = "SGM ";
        char Name[30] = "College Karad";

        strncat(College, Name, 8 );

        printf("\n Lenght of College String = %s",College);
        printf("\n Length of Name String = %s",Name);

        getch();
        return 0;

}
