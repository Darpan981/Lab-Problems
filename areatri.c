#include <stdio.h>

int main()
{
    double b,h,A;
    printf("Enter base and height: ");
    scanf("%lf %lf", &b, &h);
    A = 0.5 * b * h;
    printf("Area of triangle: %.2lf\n", A);
    return 0;
}