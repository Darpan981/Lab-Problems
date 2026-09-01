#include <stdio.h>

int main ()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0, t = n, digits = 0, temp = n;

    while (t != 0)
    {
        digits++;
        t /= 10;
    }
    while (temp != 0)
    {
        int d = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
        {
            power *= d;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == n)
    {
        printf("Armstrong Number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }
    return 0;
}