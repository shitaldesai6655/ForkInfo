#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char college[50];

        printf("\n Enter your college name = ");
        gets(college);

        getch();

        printf("\n Enter the length of college name string = %d",strlen(college));

        getch();
        return 0;
}
