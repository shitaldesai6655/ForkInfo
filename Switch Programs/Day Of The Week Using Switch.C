#include<stdio.h>
#include<conio.h>

int main()
{
    int Day = 0;

    printf("\n Enter The Day Number(1 - 7) = ");
    scanf("%d",&Day);

    switch(Day)
    {
        case 1:
            printf("\n MONDAY");
            break;
        case 2:
            printf("\n TUESDAY");
            break;
        case 3:
            printf("\n WEDNESDAY");
            break;
        case 4:
            printf("\n THRUSDAY");
            break;
        case 5:
            printf("\n FRIDAY");
            break;
        case 6:
            printf("\n SATURDAY");
            break;
        case 7:
            printf("\n SUNDAY");
            break;
        default:
            printf("\n INVALID DAY VALUE!!!");
            break;
    }

    printf("\n\n Thanks...");

    getch();
    return 0;
}

