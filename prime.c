#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter number to be checked: ");
    scanf("%d", &n);

    bool isprime = true;
    if (n < 2)
    {
        isprime = false;
    }
    for (int i = 2; i * i <= n && isprime; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
        }
    }
    if (isprime)
    {
        printf("Number is prime\n");
    }
    else 
    {
        printf("Number is not prime\n");
    }
    return 0;
}