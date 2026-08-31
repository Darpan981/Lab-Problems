#include <stdio.h>

int main()
{
    double units,cost,bill;
    printf("Enter units consumed: ");
    scanf("%lf", &units);
    printf("Enter cost per unit: ");
    scanf("%lf", &cost);
    bill = units * cost;
    printf("Electricity bill: %.2lf\n", bill);
    return 0;
}