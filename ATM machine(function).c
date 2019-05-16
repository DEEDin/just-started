#include<stdio.h>
#include<conio.h>
void Withdrawl();
void Deposit();
void CheckBalance();
int T=1000;
int main()
{
    int n;
    printf("*********ATM***********\n");
    printf("**WELOCOME TO THE BANK**\n");
    printf("1.Withdrawl\n2.Deposit\n3.CheckBalance\n4.Exit\n__Select:  ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        Withdrawl();
        break;
    case 2:
        Deposit();
        break;
    case 3:
        CheckBalance();
        break;
    case 4:
        return 0;
    default:
        printf("Enter valid numbers only");

    }
    return 0;
}
void Withdrawl()
{
    int WA;
    printf("Enter the amount you want to Withdraw");
    scanf("%d",&WA);
    if (WA<T)
    {
        T=T-WA;
        printf("The amount deducted is %d and remaining balance is %d",WA,T);

    }
    else
    {
        printf("Withdraw Amount Exceeds total amount");

    }
}
void Deposit()
{
    int dep;
    printf("Enter the amount you want to Deposit ");
    scanf("%d",&dep);
    T=T+dep;
    printf("Your updated amount is %d",T);


}
void CheckBalance()
{
    printf("Your balance is %d",T);

}
