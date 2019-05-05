#include<stdio.h>
#include<conio.h>
/************************************
ask user to input only positive and negative number only
*************************************/
void main()
{
    int fn,sn;
    printf("Enter the first number ");
    scanf("%d",&fn);
     while(fn<0)
     {
         printf("Please enter positive number only ");
         scanf("%d",&fn);
     }
    printf("Enter second number");
    scanf("%d",&sn);
     while(sn>0)
    {
         printf("Please enter negative number only");
         scanf("%d",&sn);
    }
    getch();
}
