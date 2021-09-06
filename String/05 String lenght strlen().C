#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char name[20] = {'S','h','i','t','a','l','\0'};
        char city[10] = "Karad";
        char course[] = "BCS";
        char college[50];

        printf("\n Enter your college name = ");
        gets(college);

        getch();

        printf("\n Enter the length of name string = %d",strlen(name));
        printf("\n Enter the length of college name string = %d",strlen(college));
        printf("\n Enter the length of city string = %d",strlen(city));
        printf("\n Enter the length of course string = %d",strlen(course));


        getch();
        return 0;
}
