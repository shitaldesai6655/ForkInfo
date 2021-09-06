#include<stdio.h>
#include<conio.h>

int main()
{
         char Name[20] = {'S','h','i','t','a','l','\0'};
         char City[10] = "Karad";
         char Course[] = "BSC Comp Sci";
         char College[60];

         printf("\n Enter Your College Name = ");
         /// scanf("%s", &College);
         gets(College);

         getch();

         printf("\n\n Given Clg Name = %s", College);
         printf("\n\n Given City = %s", City);

         puts("\n\n Given Name = ");
         puts(Name);

         puts("\n\n Given Course = ");
         puts(Course);

         getch();
         return 0;
}
