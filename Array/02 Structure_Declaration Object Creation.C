#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        struct Stud
        {
                int Roll_No = 0;
                long int Mob;
                float Income;
        };

        struct Stud Std1 = {0,0,0.0};

         Std1.Roll_No = 39;
         Std1.Mob = 7865341298;
         Std1.Income = 7000;

         getch();
         return 0;
}
