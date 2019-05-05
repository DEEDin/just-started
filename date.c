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
            if (d>=1 && d<=30)
            {
                printf("Date is valid");
                //year+month+day valid date valid

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
