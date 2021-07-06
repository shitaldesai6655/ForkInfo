#include<stdio.h>
#include<conio.h>

int main()
{
        int i = 0, j = 0, x = 0;
        char ch = 'A';

        printf("\n Enter no. of rows and column count for pattern = ");
        scanf("%d",&x);

        for(i = 1; i <= x; i++)
        {
                for(j = 1; j <= x; j++)
                {
                        if(i >= j)
                        {
                            printf("%c",ch);
                            ch++;
                        }
                        else
                        {
                            printf("   ");
                        }

                }

                printf("\n");
        }

        printf("\n\n Thanks...");

        getch();
        return 0;
}
