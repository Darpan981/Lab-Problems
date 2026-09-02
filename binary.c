#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int power = 1;
    while (power <= n/2)
    {
        power = power * 2;
    }
    
    int count = 0;
    printf("Binary representation: ");
    while (power > 0)
    {
        if (n >= power)
        {
            printf("1");
            n = n - power;
            count++;
        }
        else
        {
            printf("0");
        }
        power = power/2;
    }
    printf("\nNumber of 1 bits : %d\n", count);
    return 0;
}