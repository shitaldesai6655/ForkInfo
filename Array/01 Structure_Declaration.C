#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        struct stud
        {
                char City[40];      /// 40
                char Name[80];      /// 80
                int Roll_No;        /// 4
                int Phy;            /// 4
                int Maths;          /// 4
                int Chem;           /// 4
        };

        int Num = 0;
        struct stud Std1;

        printf("\n Size of Integer = %d", sizeof(int) );

        printf("\n Size of Integer Variable = %d", sizeof(Num) );

        printf("\n Size of Student Structure = %d", sizeof(struct stud) );

        printf("\n Size of Student Structure Object = %d", sizeof(Std1) );

        getch();
        return 0;
}
