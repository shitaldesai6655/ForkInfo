#include<stdio.h>
#include<conio.h>

int main()
{
        int i = 0, j = 0, x = 0;
        char ch = 'A';

        printf("\n Enter columns and rows value for Pattern =  ");
        scanf("%d",&x);

        for(i = 1; i <= x; i++)
        {
                for(j = 1; j <= x; j++)
                {
                        if(i >= j)
                        {
                                printf("%c", ch);
                        }
                        else
                        {
                                printf("   ");
                        }
                }
                ch++;

                printf("\n");
        }

        printf("\n Thanks...");

        getch();
        return 0;
}

