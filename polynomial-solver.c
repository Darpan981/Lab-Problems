#include <stdio.h>

int a, b, c, d, x;
int power(int, int);
int evaluateTerm(int, int, int);
int evaluatePoly(int, int, int, int, int);

int main()
{
   printf("\n---POLYNOMIAL EVALUATOR---\nEnter coefficents (a b c d): ");
   scanf("%d %d %d %d", &a, &b, &c, &d);
   printf("Enter the value of x: ");
   scanf("%d", &x);
   printf("f(%d) = %d", x, evaluatePoly(a, b, c, d, x));
}

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}

int evaluateTerm(int coeff, int x, int exp)
{
    return coeff * power(x,exp);
}

int evaluatePoly(int a, int b, int c, int d, int x)
{
    return evaluateTerm(a,x,3) + evaluateTerm(b,x,2) + evaluateTerm(c,x,1) + evaluateTerm(d,x,0);
}