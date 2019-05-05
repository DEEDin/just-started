#include<stdio.h>
#include<conio.h>
/***********************************
To ask user a number and ask them to operate the conditions given to them
************************************/
void main()
{
    int fn, sn;
    char n;
    printf("Enter any two numbers");
    scanf("%d %d",&fn,&sn);
    printf("Select any given operations:+,-,*,/  ");
    scanf(" %c",&n);
    switch (n)
        {
        case '+':
            printf("Its, %d + %d=%d",fn,sn,(fn+sn));
            break;
        case '-':
            printf("Its, %d - %d=%d",fn,sn,(fn-sn));
            break;
        case '*':
            printf("Its, %d * %d=%d",fn,sn,(fn*sn));
            break;
        case '/':
            printf("Its, %d / %d=%d",fn,sn,(fn/sn));
            break;

        }
    getch();

}
