#include<stdio.h>
#include<conio.h>
/*******************************
its switch syntax
********************************/
void main()
{
    int n;
    printf("Enter a day no.");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
        printf("It's Sunday..");
        break;
        case 2:
        printf("It's Monday..");
        break;
        case 3:
        printf("It's Tuesday..");
        break;
        case 4:
        printf("It's Wednesday");
        break;
        case 5:
        printf("It's Thursday");
        break;
        case 6:
        printf("It's Friday..");
        break;
        case 7:
        printf("It's Saturday.");
        break;


    }
    getch();
}
