#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }
    
    int count = 0, sum = 0, reverse = 0, t = num;
    while (t > 0)
    {
        int digit = t % 10;
        count++;
        sum = sum + digit;
        reverse = reverse * 10 + t % 10;
        t /= 10;
    }
    printf("No. of digits : %d\n", count);
    printf("Sum of digits : %d\n", sum);
    printf("Reverse of number : %d\n", reverse);

    return 0;
}