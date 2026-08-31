#include <stdio.h>

int main()
{
    double tax,income;
    printf("Enter annual income: ");
    scanf("%lf", &income);

    if (income <= 0)
    {
        printf("Invalid income\n");
        return 0;
    }
    else if (income <= 250000)
    {
        printf("Income tax rate: 0%%\nIncome tax: Rs. 0\n");
    }
    else if (income >= 250001 && income <= 500000)
    {
        printf("Income tax rate: 5%%\n");
        printf("Income tax: Rs. %.2lf\n", 0.05 * income);
    }
    else if (income >= 500001 && income <= 1000000)
    {
        printf("Income tax rate: 20%%\n");
        printf("Income tax: Rs. %.2lf\n", 0.2 * income);
    }
    else
    {
        printf("Income tax rate: 30%%\n");
        printf("Income tax: Rs. %.2lf\n", 0.3 * income);
    }
    return 0;
}