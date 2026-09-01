#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = 0, temp = num;

    while (temp != 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    if (reversed == num)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
    return 0;
}