#include <stdio.h>

int n;
int sum = 0;
int sumOfDigits(int);

int main()
{
	printf("Enter non negative integer: ");
	scanf("%d", &n);
	printf("Sum of digits: %d\n", sumOfDigits(n));
	return 0;
}

int sumOfDigits(int n)
{
	if (n < 10 && n >= 0)
	{
		return n + sum;
	}
	else
	{
		int t = n % 10;
		sum = sum + t;
		n = n / 10;
		return sumOfDigits(n);
	}
}
