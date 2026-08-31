#include <stdio.h>

int main()
{
    double USD,INR,ER;
    printf("Enter amount in USD: ");
    scanf("%lf", &USD);
    printf("Enter exchange rate: ");
    scanf("%lf", &ER);
    INR = USD * ER;
    printf("Amount in INR: %.2lf\n", INR);
    return 0;
}