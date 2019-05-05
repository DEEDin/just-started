#include<stdio.h>
#include<conio.h>
void main()
{
    int y,m,d;
    printf("Enter the date[YYYY-MM-DD]");
    scanf("%d-%d-%d",&y,&m,&d);
    if (y>=1900 && y<=2100)
    {
        if (m>=1 && m<=12)
        {
            if ((d>=1 && d<=31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 ))
            {
                printf("date is valid");
            }
        else if ((d>=1 && d<=30) && (m==4 || m==6 || m==9 || m==11))
            {
                printf("Date is valid");

            }
        else if ((d>=1 && d<=28) && (m==2))
            {
                printf("date is valid");
            }
        else if ((d>=1 && d<=29) && (m==2) && (y%400==0 || (y%4==0 && y%100!=0)))
            {
                printf("date is valid");

            }
            else
            {
                printf("day is invlaid");
            }

        }
        else
        {
            printf("month invalid");
        }

    }
    else
    {
        printf("year is invalid");

    }
}

