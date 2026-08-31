#include <stdio.h>
#include <math.h>

int main() 
{
    double a,b,c,D,x1,x2;
    printf("Enter the coefficients of quadratic: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    D = b*b-4*a*c;
    x1 = (-b + sqrt(D))/2*a;
    x2 = (-b - sqrt(D))/2*a;
    printf("The roots are %.2lf and %.2lf\n", x1, x2);
    return 0;
}