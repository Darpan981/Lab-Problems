#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || b + c <= a || c + a <= b)
    {
        printf("Invalid triangle\n");
        return 0;
    }
    if (a == b && b == c)
    {
        printf("Equilateral triangle\n");
    }
    if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
    {
        printf("Isosceles triangle\n");
    }
    if (a != b && b != c && a != c)
    {
        printf("Scalene triangle\n");
    }
    return 0;
}