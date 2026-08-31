#include <stdio.h>

int main()
{
    int unit;
    printf("Enter units consumed: ");
    scanf("%d", &unit);

    if (unit < 0)
    {
        printf("Invalid input\n");
    }
    if (unit < 100 && unit > 0)
    {
        printf("Low usage\n");
    }
    if (unit >= 100 && unit <= 300)
    {
        printf("Normal usage\n");
    }
    if (unit >= 301 && unit <= 500)
    {
        printf("High usage\n");
    }
    if (unit > 500)
    {
        printf("Critical usage\n");
    }
    return 0;
}