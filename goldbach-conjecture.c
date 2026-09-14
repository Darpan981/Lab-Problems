#include <stdio.h>

int N;
int primeChecker(int);

int main()
{
    printf("\n---Goldbach's Conjecture Verifier---\nEnter an even integer greater than 2: ");
    scanf("%d", &N);

    if (N % 2 != 0 || N <= 2)
    {
        printf("Input must be an even integer greater than 2\n");
        return 0;
    }

    for (int p1 = 2; p1 <= N; p1++)
    {
        if (primeChecker(p1))
        {
            int p2 = N - p1;
            if (primeChecker(p2))
            {
                printf("%d = %d + %d\n", N, p1, p2);
                break;
            }
        }
    }
    return 0;
}

int primeChecker(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


