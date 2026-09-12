#include <stdio.h>
#include <math.h>

double P, r;
int n, show;
double emi(double, double, int);
void data(double, double, int, int);

int main()
{
    printf("\n--- Loan Amortization Schedule ---\nEnter principal loan amount: ");
    scanf("%lf", &P);
    printf("Enter annual interest rate (%%): ");
    scanf("%lf", &r);
    printf("Enter total loan term (months): ");
    scanf("%d", &n);
    printf("Enter months to show: ");
    scanf("%d", &show);

    printf("\nFixed EMI: %.2lf\n", emi(P,r,n));
    data(P,r,n,show);
    return 0;
}

double emi(double P, double r, int n)
{
    if (r == 0)
    {
        return P / n;
    }
    else
    {
        return (P * (r/1200) * pow(1+(r/1200),n))/(pow(1+(r/1200),n) - 1);
    }
}

void data(double P, double r, int n, int show)
{
    double emiVal = emi(P, r, n);
    double balance = P;

    for (int i = 1; i <= show; i++)
    {
        double interest = balance * (r / 1200);
        double principal = emiVal - interest;
        balance -= principal;

        printf("Month %d | Interest: %.2lf | Principal Paid: %.2lf | Balance: %.2lf\n", i, interest, principal, balance);
    }   
}