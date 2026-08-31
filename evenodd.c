#include <stdio.h>

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    if (a % 2 == 0 && a > 0)
    {
        printf("Positive even integer\n");
    }
    else if (a % 2 == 0 && a < 0)
    {
        printf("Negative even integer\n");
    }
    else if (a % 2 != 0 && a > 0)
    {
        printf("Positive odd integer\n");
    }
    else if (a % 2 != 0 && a < 0)
    {
        printf("Negative odd integer\n");
    }
    else
    {
        printf("Integer is 0\n");
    }
    return 0;
}